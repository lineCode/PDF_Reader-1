// Copyright Epic Games, Inc. All Rights Reserved.

#include "PDF_ReaderBPLibrary.h"
#include "PDF_Reader.h"

// UE Mechanics Includes.
#include "Misc/Base64.h"
#include "Misc/FileHelper.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetStringLibrary.h"

// UE Rendering Includes.
#include "RHICommandList.h"					
#include "RenderingThread.h"

THIRD_PARTY_INCLUDES_START
// C++ Includes.
#include <string>
#include <fstream>

// PDFium Includes.
#include "fpdf_formfill.h"
#include "fpdf_text.h"
#include "fpdf_edit.h"
#include "fpdf_save.h"
THIRD_PARTY_INCLUDES_END

// Global library initialization checker.
static inline bool Global_bIsLibInitialized = false;

// Global documents pool.
static inline TSet<FPDF_DOCUMENT> Global_Docs_Pool;

// Global PDF Export path for writer callback.
static inline FString Global_PDF_Export_Path;

// Global char converter pool for ASCII to CHAR.
static inline TMap<uint32_t, FString> Global_ASCII_to_Char;

// Global char converter pool for CHAR to ASCII.
static inline TMap<FString, uint32_t> Global_Char_To_ASCII;

void DefineCharCodes()
{
	Global_ASCII_to_Char.Add(10, "\n");
	Global_ASCII_to_Char.Add(32, " ");
	Global_ASCII_to_Char.Add(33, "!");
	Global_ASCII_to_Char.Add(34, "\"");
	Global_ASCII_to_Char.Add(35, "#");
	Global_ASCII_to_Char.Add(36, "$");
	Global_ASCII_to_Char.Add(37, "%");
	Global_ASCII_to_Char.Add(38, "&");
	Global_ASCII_to_Char.Add(39, "'");
	Global_ASCII_to_Char.Add(40, "(");
	Global_ASCII_to_Char.Add(41, ")");
	Global_ASCII_to_Char.Add(42, "*");
	Global_ASCII_to_Char.Add(43, "+");
	Global_ASCII_to_Char.Add(44, ",");
	Global_ASCII_to_Char.Add(45, "-");
	Global_ASCII_to_Char.Add(46, ".");
	Global_ASCII_to_Char.Add(47, "/");
	Global_ASCII_to_Char.Add(48, "0");
	Global_ASCII_to_Char.Add(49, "1");
	Global_ASCII_to_Char.Add(50, "2");
	Global_ASCII_to_Char.Add(51, "3");
	Global_ASCII_to_Char.Add(52, "4");
	Global_ASCII_to_Char.Add(53, "5");
	Global_ASCII_to_Char.Add(54, "6");
	Global_ASCII_to_Char.Add(55, "7");
	Global_ASCII_to_Char.Add(56, "8");
	Global_ASCII_to_Char.Add(57, "9");
	Global_ASCII_to_Char.Add(58, ":");
	Global_ASCII_to_Char.Add(59, ";");
	Global_ASCII_to_Char.Add(60, "<");
	Global_ASCII_to_Char.Add(61, "=");
	Global_ASCII_to_Char.Add(62, ">");
	Global_ASCII_to_Char.Add(63, "?");
	Global_ASCII_to_Char.Add(64, "@");
	Global_ASCII_to_Char.Add(65, "A");
	Global_ASCII_to_Char.Add(66, "B");
	Global_ASCII_to_Char.Add(67, "C");
	Global_ASCII_to_Char.Add(68, "D");
	Global_ASCII_to_Char.Add(69, "E");
	Global_ASCII_to_Char.Add(70, "F");
	Global_ASCII_to_Char.Add(71, "G");
	Global_ASCII_to_Char.Add(72, "H");
	Global_ASCII_to_Char.Add(73, "I");
	Global_ASCII_to_Char.Add(74, "J");
	Global_ASCII_to_Char.Add(75, "K");
	Global_ASCII_to_Char.Add(76, "L");
	Global_ASCII_to_Char.Add(77, "M");
	Global_ASCII_to_Char.Add(78, "N");
	Global_ASCII_to_Char.Add(79, "O");
	Global_ASCII_to_Char.Add(80, "P");
	Global_ASCII_to_Char.Add(81, "Q");
	Global_ASCII_to_Char.Add(82, "R");
	Global_ASCII_to_Char.Add(83, "S");
	Global_ASCII_to_Char.Add(84, "T");
	Global_ASCII_to_Char.Add(85, "U");
	Global_ASCII_to_Char.Add(86, "V");
	Global_ASCII_to_Char.Add(87, "W");
	Global_ASCII_to_Char.Add(88, "X");
	Global_ASCII_to_Char.Add(89, "Y");
	Global_ASCII_to_Char.Add(90, "Z");
	Global_ASCII_to_Char.Add(91, "[");
	Global_ASCII_to_Char.Add(92, "\\");
	Global_ASCII_to_Char.Add(93, "]");
	Global_ASCII_to_Char.Add(94, "^");
	Global_ASCII_to_Char.Add(95, "_");
	Global_ASCII_to_Char.Add(96, "`");
	Global_ASCII_to_Char.Add(97, "a");
	Global_ASCII_to_Char.Add(98, "b");
	Global_ASCII_to_Char.Add(99, "c");
	Global_ASCII_to_Char.Add(100, "d");
	Global_ASCII_to_Char.Add(101, "e");
	Global_ASCII_to_Char.Add(102, "f");
	Global_ASCII_to_Char.Add(103, "g");
	Global_ASCII_to_Char.Add(104, "h");
	Global_ASCII_to_Char.Add(105, "i");
	Global_ASCII_to_Char.Add(106, "j");
	Global_ASCII_to_Char.Add(107, "k");
	Global_ASCII_to_Char.Add(108, "l");
	Global_ASCII_to_Char.Add(109, "m");
	Global_ASCII_to_Char.Add(110, "n");
	Global_ASCII_to_Char.Add(111, "o");
	Global_ASCII_to_Char.Add(112, "p");
	Global_ASCII_to_Char.Add(113, "q");
	Global_ASCII_to_Char.Add(114, "r");
	Global_ASCII_to_Char.Add(115, "s");
	Global_ASCII_to_Char.Add(116, "t");
	Global_ASCII_to_Char.Add(117, "u");
	Global_ASCII_to_Char.Add(118, "v");
	Global_ASCII_to_Char.Add(119, "w");
	Global_ASCII_to_Char.Add(120, "x");
	Global_ASCII_to_Char.Add(121, "y");
	Global_ASCII_to_Char.Add(122, "z");
	Global_ASCII_to_Char.Add(123, "{");
	Global_ASCII_to_Char.Add(124, "|");
	Global_ASCII_to_Char.Add(125, "}");
	Global_ASCII_to_Char.Add(126, "~");
	Global_ASCII_to_Char.Add(128, "€");
	Global_ASCII_to_Char.Add(130, "‚");
	Global_ASCII_to_Char.Add(131, "ƒ");
	Global_ASCII_to_Char.Add(132, "„");
	Global_ASCII_to_Char.Add(133, "…");
	Global_ASCII_to_Char.Add(134, "†");
	Global_ASCII_to_Char.Add(135, "‡");
	Global_ASCII_to_Char.Add(136, "ˆ");
	Global_ASCII_to_Char.Add(137, "‰");
	Global_ASCII_to_Char.Add(138, "Š");
	Global_ASCII_to_Char.Add(139, "‹");
	Global_ASCII_to_Char.Add(140, "Œ");
	Global_ASCII_to_Char.Add(145, "‘");
	Global_ASCII_to_Char.Add(146, "’");
	Global_ASCII_to_Char.Add(147, "“");
	Global_ASCII_to_Char.Add(148, "”");
	Global_ASCII_to_Char.Add(149, "•");
	Global_ASCII_to_Char.Add(150, "–");
	Global_ASCII_to_Char.Add(151, "—");
	Global_ASCII_to_Char.Add(152, "˜");
	Global_ASCII_to_Char.Add(153, "™");
	Global_ASCII_to_Char.Add(154, "š");
	Global_ASCII_to_Char.Add(155, "›");
	Global_ASCII_to_Char.Add(156, "œ");
	Global_ASCII_to_Char.Add(159, "Ÿ");
	Global_ASCII_to_Char.Add(161, "¡");
	Global_ASCII_to_Char.Add(162, "¢");
	Global_ASCII_to_Char.Add(163, "£");
	Global_ASCII_to_Char.Add(164, "¤");
	Global_ASCII_to_Char.Add(165, "¥");
	Global_ASCII_to_Char.Add(166, "¦");
	Global_ASCII_to_Char.Add(167, "§");
	Global_ASCII_to_Char.Add(168, "¨");
	Global_ASCII_to_Char.Add(169, "©");
	Global_ASCII_to_Char.Add(170, "ª");
	Global_ASCII_to_Char.Add(171, "«");
	Global_ASCII_to_Char.Add(172, "¬");
	Global_ASCII_to_Char.Add(174, "®");
	Global_ASCII_to_Char.Add(175, "¯");
	Global_ASCII_to_Char.Add(176, "°");
	Global_ASCII_to_Char.Add(177, "±");
	Global_ASCII_to_Char.Add(178, "²");
	Global_ASCII_to_Char.Add(179, "³");
	Global_ASCII_to_Char.Add(180, "´");
	Global_ASCII_to_Char.Add(181, "µ");
	Global_ASCII_to_Char.Add(182, "¶");
	Global_ASCII_to_Char.Add(183, "·");
	Global_ASCII_to_Char.Add(184, "¸");
	Global_ASCII_to_Char.Add(185, "¹");
	Global_ASCII_to_Char.Add(186, "º");
	Global_ASCII_to_Char.Add(187, "»");
	Global_ASCII_to_Char.Add(188, "¼");
	Global_ASCII_to_Char.Add(189, "½");
	Global_ASCII_to_Char.Add(190, "¾");
	Global_ASCII_to_Char.Add(191, "¿");
	Global_ASCII_to_Char.Add(192, "À");
	Global_ASCII_to_Char.Add(193, "Á");
	Global_ASCII_to_Char.Add(194, "Â");
	Global_ASCII_to_Char.Add(195, "Ã");
	Global_ASCII_to_Char.Add(196, "Ä");
	Global_ASCII_to_Char.Add(197, "Å");
	Global_ASCII_to_Char.Add(198, "Æ");
	Global_ASCII_to_Char.Add(199, "Ç");
	Global_ASCII_to_Char.Add(200, "È");
	Global_ASCII_to_Char.Add(201, "É");
	Global_ASCII_to_Char.Add(202, "Ê");
	Global_ASCII_to_Char.Add(203, "Ë");
	Global_ASCII_to_Char.Add(204, "Ì");
	Global_ASCII_to_Char.Add(205, "Í");
	Global_ASCII_to_Char.Add(206, "Î");
	Global_ASCII_to_Char.Add(207, "Ï");
	Global_ASCII_to_Char.Add(208, "Ğ");
	Global_ASCII_to_Char.Add(209, "Ñ");
	Global_ASCII_to_Char.Add(210, "Ò");
	Global_ASCII_to_Char.Add(211, "Ó");
	Global_ASCII_to_Char.Add(212, "Ô");
	Global_ASCII_to_Char.Add(213, "Õ");
	Global_ASCII_to_Char.Add(214, "Ö");
	Global_ASCII_to_Char.Add(215, "×");
	Global_ASCII_to_Char.Add(216, "Ø");
	Global_ASCII_to_Char.Add(217, "Ù");
	Global_ASCII_to_Char.Add(218, "Ú");
	Global_ASCII_to_Char.Add(219, "Û");
	Global_ASCII_to_Char.Add(220, "Ü");
	Global_ASCII_to_Char.Add(221, "İ");
	Global_ASCII_to_Char.Add(222, "Ş");
	Global_ASCII_to_Char.Add(223, "ß");
	Global_ASCII_to_Char.Add(224, "à");
	Global_ASCII_to_Char.Add(225, "á");
	Global_ASCII_to_Char.Add(226, "â");
	Global_ASCII_to_Char.Add(227, "ã");
	Global_ASCII_to_Char.Add(228, "ä");
	Global_ASCII_to_Char.Add(229, "å");
	Global_ASCII_to_Char.Add(230, "æ");
	Global_ASCII_to_Char.Add(231, "ç");
	Global_ASCII_to_Char.Add(232, "è");
	Global_ASCII_to_Char.Add(233, "é");
	Global_ASCII_to_Char.Add(234, "ê");
	Global_ASCII_to_Char.Add(235, "ë");
	Global_ASCII_to_Char.Add(236, "ì");
	Global_ASCII_to_Char.Add(237, "í");
	Global_ASCII_to_Char.Add(238, "î");
	Global_ASCII_to_Char.Add(239, "ï");
	Global_ASCII_to_Char.Add(240, "ğ");
	Global_ASCII_to_Char.Add(241, "ñ");
	Global_ASCII_to_Char.Add(242, "ò");
	Global_ASCII_to_Char.Add(243, "ó");
	Global_ASCII_to_Char.Add(244, "ô");
	Global_ASCII_to_Char.Add(245, "õ");
	Global_ASCII_to_Char.Add(246, "ö");
	Global_ASCII_to_Char.Add(247, "÷");
	Global_ASCII_to_Char.Add(248, "ø");
	Global_ASCII_to_Char.Add(249, "ù");
	Global_ASCII_to_Char.Add(250, "ú");
	Global_ASCII_to_Char.Add(251, "û");
	Global_ASCII_to_Char.Add(252, "ü");
	Global_ASCII_to_Char.Add(253, "ı");
	Global_ASCII_to_Char.Add(254, "ş");
	Global_ASCII_to_Char.Add(255, "ÿ");

	Global_Char_To_ASCII.Add("\n", 10);
	Global_Char_To_ASCII.Add(" ", 32);
	Global_Char_To_ASCII.Add("!", 33);
	Global_Char_To_ASCII.Add("\"",34);
	Global_Char_To_ASCII.Add("#", 35);
	Global_Char_To_ASCII.Add("$", 36);
	Global_Char_To_ASCII.Add("%", 37);
	Global_Char_To_ASCII.Add("&", 38);
	Global_Char_To_ASCII.Add("'", 39);
	Global_Char_To_ASCII.Add("(", 40);
	Global_Char_To_ASCII.Add(")", 41);
	Global_Char_To_ASCII.Add("*", 42);
	Global_Char_To_ASCII.Add("+", 43);
	Global_Char_To_ASCII.Add(",", 44);
	Global_Char_To_ASCII.Add("-", 45);
	Global_Char_To_ASCII.Add(".", 46);
	Global_Char_To_ASCII.Add("/", 47);
	Global_Char_To_ASCII.Add("0", 48);
	Global_Char_To_ASCII.Add("1", 49);
	Global_Char_To_ASCII.Add("2", 50);
	Global_Char_To_ASCII.Add("3", 51);
	Global_Char_To_ASCII.Add("4", 52);
	Global_Char_To_ASCII.Add("5", 53);
	Global_Char_To_ASCII.Add("6", 54);
	Global_Char_To_ASCII.Add("7", 55);
	Global_Char_To_ASCII.Add("8", 56);
	Global_Char_To_ASCII.Add("9", 57);
	Global_Char_To_ASCII.Add(":", 58);
	Global_Char_To_ASCII.Add(";", 59);
	Global_Char_To_ASCII.Add("<", 60);
	Global_Char_To_ASCII.Add("=", 61);
	Global_Char_To_ASCII.Add(">", 62);
	Global_Char_To_ASCII.Add("?", 63);
	Global_Char_To_ASCII.Add("@", 64);
	Global_Char_To_ASCII.Add("A", 65);
	Global_Char_To_ASCII.Add("B", 66);
	Global_Char_To_ASCII.Add("C", 67);
	Global_Char_To_ASCII.Add("D", 68);
	Global_Char_To_ASCII.Add("E", 69);
	Global_Char_To_ASCII.Add("F", 70);
	Global_Char_To_ASCII.Add("G", 71);
	Global_Char_To_ASCII.Add("H", 72);
	Global_Char_To_ASCII.Add("I", 73);
	Global_Char_To_ASCII.Add("J", 74);
	Global_Char_To_ASCII.Add("K", 75);
	Global_Char_To_ASCII.Add("L", 76);
	Global_Char_To_ASCII.Add("M", 77);
	Global_Char_To_ASCII.Add("N", 78);
	Global_Char_To_ASCII.Add("O", 79);
	Global_Char_To_ASCII.Add("P", 80);
	Global_Char_To_ASCII.Add("Q", 81);
	Global_Char_To_ASCII.Add("R", 82);
	Global_Char_To_ASCII.Add("S", 83);
	Global_Char_To_ASCII.Add("T", 84);
	Global_Char_To_ASCII.Add("U", 85);
	Global_Char_To_ASCII.Add("V", 86);
	Global_Char_To_ASCII.Add("W", 87);
	Global_Char_To_ASCII.Add("X", 88);
	Global_Char_To_ASCII.Add("Y", 89);
	Global_Char_To_ASCII.Add("Z", 90);
	Global_Char_To_ASCII.Add("[", 91);
	Global_Char_To_ASCII.Add("\\",92);
	Global_Char_To_ASCII.Add("]", 93);
	Global_Char_To_ASCII.Add("^", 94);
	Global_Char_To_ASCII.Add("_", 95);
	Global_Char_To_ASCII.Add("`", 96);
	Global_Char_To_ASCII.Add("a", 97);
	Global_Char_To_ASCII.Add("b", 98);
	Global_Char_To_ASCII.Add("c", 99);
	Global_Char_To_ASCII.Add("d", 100);
	Global_Char_To_ASCII.Add("e", 101);
	Global_Char_To_ASCII.Add("f", 102);
	Global_Char_To_ASCII.Add("g", 103);
	Global_Char_To_ASCII.Add("h", 104);
	Global_Char_To_ASCII.Add("i", 105);
	Global_Char_To_ASCII.Add("j", 106);
	Global_Char_To_ASCII.Add("k", 107);
	Global_Char_To_ASCII.Add("l", 108);
	Global_Char_To_ASCII.Add("m", 109);
	Global_Char_To_ASCII.Add("n", 110);
	Global_Char_To_ASCII.Add("o", 111);
	Global_Char_To_ASCII.Add("p", 112);
	Global_Char_To_ASCII.Add("q", 113);
	Global_Char_To_ASCII.Add("r", 114);
	Global_Char_To_ASCII.Add("s", 115);
	Global_Char_To_ASCII.Add("t", 116);
	Global_Char_To_ASCII.Add("u", 117);
	Global_Char_To_ASCII.Add("v", 118);
	Global_Char_To_ASCII.Add("w", 119);
	Global_Char_To_ASCII.Add("x", 120);
	Global_Char_To_ASCII.Add("y", 121);
	Global_Char_To_ASCII.Add("z", 122);
	Global_Char_To_ASCII.Add("{", 123);
	Global_Char_To_ASCII.Add("|", 124);
	Global_Char_To_ASCII.Add("}", 125);
	Global_Char_To_ASCII.Add("~", 126);
	Global_Char_To_ASCII.Add("€", 128);
	Global_Char_To_ASCII.Add("‚", 130);
	Global_Char_To_ASCII.Add("ƒ", 131);
	Global_Char_To_ASCII.Add("„", 132);
	Global_Char_To_ASCII.Add("…", 133);
	Global_Char_To_ASCII.Add("†", 134);
	Global_Char_To_ASCII.Add("‡", 135);
	Global_Char_To_ASCII.Add("ˆ", 136);
	Global_Char_To_ASCII.Add("‰", 137);
	Global_Char_To_ASCII.Add("Š", 138);
	Global_Char_To_ASCII.Add("‹", 139);
	Global_Char_To_ASCII.Add("Œ", 140);
	Global_Char_To_ASCII.Add("‘", 145);
	Global_Char_To_ASCII.Add("’", 146);
	Global_Char_To_ASCII.Add("“", 147);
	Global_Char_To_ASCII.Add("”", 148);
	Global_Char_To_ASCII.Add("•", 149);
	Global_Char_To_ASCII.Add("–", 150);
	Global_Char_To_ASCII.Add("—", 151);
	Global_Char_To_ASCII.Add("˜", 152);
	Global_Char_To_ASCII.Add("™", 153);
	Global_Char_To_ASCII.Add("š", 154);
	Global_Char_To_ASCII.Add("›", 155);
	Global_Char_To_ASCII.Add("œ", 156);
	Global_Char_To_ASCII.Add("Ÿ", 159);
	Global_Char_To_ASCII.Add("¡", 161);
	Global_Char_To_ASCII.Add("¢", 162);
	Global_Char_To_ASCII.Add("£", 163);
	Global_Char_To_ASCII.Add("¤", 164);
	Global_Char_To_ASCII.Add("¥", 165);
	Global_Char_To_ASCII.Add("¦", 166);
	Global_Char_To_ASCII.Add("§", 167);
	Global_Char_To_ASCII.Add("¨", 168);
	Global_Char_To_ASCII.Add("©", 169);
	Global_Char_To_ASCII.Add("ª", 170);
	Global_Char_To_ASCII.Add("«", 171);
	Global_Char_To_ASCII.Add("¬", 172);
	Global_Char_To_ASCII.Add("®", 174);
	Global_Char_To_ASCII.Add("¯", 175);
	Global_Char_To_ASCII.Add("°", 176);
	Global_Char_To_ASCII.Add("±", 177);
	Global_Char_To_ASCII.Add("²", 178);
	Global_Char_To_ASCII.Add("³", 179);
	Global_Char_To_ASCII.Add("´", 180);
	Global_Char_To_ASCII.Add("µ", 181);
	Global_Char_To_ASCII.Add("¶", 182);
	Global_Char_To_ASCII.Add("·", 183);
	Global_Char_To_ASCII.Add("¸", 184);
	Global_Char_To_ASCII.Add("¹", 185);
	Global_Char_To_ASCII.Add("º", 186);
	Global_Char_To_ASCII.Add("»", 187);
	Global_Char_To_ASCII.Add("¼", 188);
	Global_Char_To_ASCII.Add("½", 189);
	Global_Char_To_ASCII.Add("¾", 190);
	Global_Char_To_ASCII.Add("¿", 191);
	Global_Char_To_ASCII.Add("À", 192);
	Global_Char_To_ASCII.Add("Á", 193);
	Global_Char_To_ASCII.Add("Â", 194);
	Global_Char_To_ASCII.Add("Ã", 195);
	Global_Char_To_ASCII.Add("Ä", 196);
	Global_Char_To_ASCII.Add("Å", 197);
	Global_Char_To_ASCII.Add("Æ", 198);
	Global_Char_To_ASCII.Add("Ç", 199);
	Global_Char_To_ASCII.Add("È", 200);
	Global_Char_To_ASCII.Add("É", 201);
	Global_Char_To_ASCII.Add("Ê", 202);
	Global_Char_To_ASCII.Add("Ë", 203);
	Global_Char_To_ASCII.Add("Ì", 204);
	Global_Char_To_ASCII.Add("Í", 205);
	Global_Char_To_ASCII.Add("Î", 206);
	Global_Char_To_ASCII.Add("Ï", 207);
	Global_Char_To_ASCII.Add("Ğ", 208);
	Global_Char_To_ASCII.Add("Ñ", 209);
	Global_Char_To_ASCII.Add("Ò", 210);
	Global_Char_To_ASCII.Add("Ó", 211);
	Global_Char_To_ASCII.Add("Ô", 212);
	Global_Char_To_ASCII.Add("Õ", 213);
	Global_Char_To_ASCII.Add("Ö", 214);
	Global_Char_To_ASCII.Add("×", 215);
	Global_Char_To_ASCII.Add("Ø", 216);
	Global_Char_To_ASCII.Add("Ù", 217);
	Global_Char_To_ASCII.Add("Ú", 218);
	Global_Char_To_ASCII.Add("Û", 219);
	Global_Char_To_ASCII.Add("Ü", 220);
	Global_Char_To_ASCII.Add("İ", 221);
	Global_Char_To_ASCII.Add("Ş", 222);
	Global_Char_To_ASCII.Add("ß", 223);
	Global_Char_To_ASCII.Add("à", 224);
	Global_Char_To_ASCII.Add("á", 225);
	Global_Char_To_ASCII.Add("â", 226);
	Global_Char_To_ASCII.Add("ã", 227);
	Global_Char_To_ASCII.Add("ä", 228);
	Global_Char_To_ASCII.Add("å", 229);
	Global_Char_To_ASCII.Add("æ", 230);
	Global_Char_To_ASCII.Add("ç", 231);
	Global_Char_To_ASCII.Add("è", 232);
	Global_Char_To_ASCII.Add("é", 233);
	Global_Char_To_ASCII.Add("ê", 234);
	Global_Char_To_ASCII.Add("ë", 235);
	Global_Char_To_ASCII.Add("ì", 236);
	Global_Char_To_ASCII.Add("í", 237);
	Global_Char_To_ASCII.Add("î", 238);
	Global_Char_To_ASCII.Add("ï", 239);
	Global_Char_To_ASCII.Add("ğ", 240);
	Global_Char_To_ASCII.Add("ñ", 241);
	Global_Char_To_ASCII.Add("ò", 242);
	Global_Char_To_ASCII.Add("ó", 243);
	Global_Char_To_ASCII.Add("ô", 244);
	Global_Char_To_ASCII.Add("õ", 245);
	Global_Char_To_ASCII.Add("ö", 246);
	Global_Char_To_ASCII.Add("÷", 247);
	Global_Char_To_ASCII.Add("ø", 248);
	Global_Char_To_ASCII.Add("ù", 249);
	Global_Char_To_ASCII.Add("ú", 250);
	Global_Char_To_ASCII.Add("û", 251);
	Global_Char_To_ASCII.Add("ü", 252);
	Global_Char_To_ASCII.Add("ı", 253);
	Global_Char_To_ASCII.Add("ş", 254);
	Global_Char_To_ASCII.Add("ÿ", 255);
}

UPDF_ReaderBPLibrary::UPDF_ReaderBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
	if (HasAnyFlags(RF_ClassDefaultObject) == false)
	{
		AddToRoot();
	}
}

FString UPDF_ReaderBPLibrary::PDF_Android_Path_Helper(FString InFileName)
{
	if (UGameplayStatics::GetPlatformName() == "Android" || UGameplayStatics::GetPlatformName() == "IOS")
	{
		if (InFileName.IsEmpty() == true)
		{
			return "";
		}

		FString Path_Referance = FPlatformFileManager::Get().GetPlatformFile().ConvertToAbsolutePathForExternalAppForRead(*(FPaths::ProjectSavedDir()));

		TArray<FString> Path_Sections;
		Path_Referance.ParseIntoArray(Path_Sections, TEXT("/"), true);
		FString Path_Absolute = "/" + Path_Sections[0] + "/" + Path_Sections[1] + "/" + Path_Sections[2] + "/" + InFileName;

		return Path_Absolute;
	}

	else
	{
		return "";
	}
}

bool UPDF_ReaderBPLibrary::PDF_LibInit(FString& Out_Code)
{
	if (Global_bIsLibInitialized == true)
	{
		Out_Code = "Library already initialized";
		return false;
	}
	
	FPDF_LIBRARY_CONFIG config;
	FMemory::Memset(&config, 0, sizeof(config));

	config.version = 2;
	config.m_pUserFontPaths = NULL;
	config.m_pIsolate = NULL;
	config.m_v8EmbedderSlot = 0;
	FPDF_InitLibraryWithConfig(&config);

	Global_bIsLibInitialized = true;

	DefineCharCodes();

	Out_Code = "Library successfully initialized.";
	return true;
}

bool UPDF_ReaderBPLibrary::PDF_LibClose(FString& Out_Code)
{
	if (Global_bIsLibInitialized == false)
	{
		Out_Code = "Library already closed.";
		return false;
	}
	
	TArray<FPDF_DOCUMENT> Array_Docs = Global_Docs_Pool.Array();
	for (int32 Index_Docs = 0; Index_Docs < Array_Docs.Num(); Index_Docs++)
	{
		if (Array_Docs[Index_Docs])
		{
			FPDF_CloseDocument(Array_Docs[Index_Docs]);
		}
	}
	
	Array_Docs.Empty();
	Global_Docs_Pool.Empty();

	Global_bIsLibInitialized = false;
	FPDF_DestroyLibrary();

	Out_Code = "Library successfully closed.";
	return true;
}

bool UPDF_ReaderBPLibrary::PDF_LibState()
{
	return Global_bIsLibInitialized;
}

bool UPDF_ReaderBPLibrary::PDF_Read_Path(UArrayObject*& Out_Byte_Object, FString In_Path)
{
	if (Global_bIsLibInitialized == false)
	{
		return false;
	}

	if (In_Path.IsEmpty() == true)
	{
		return false;
	}

	FString Path = In_Path;

	if (UGameplayStatics::GetPlatformName() == "Windows")
	{
		FPaths::MakePlatformFilename(Path);
	}

	if (FPaths::FileExists(Path) == false)
	{
		return false;
	}

	TArray64<uint8> ByteArray;
	FFileHelper::LoadFileToArray(ByteArray, *In_Path);

	UArrayObject* ByteObject = NewObject<UArrayObject>();
	ByteObject->Array_Bytes_64 = ByteArray;
	
	return true;
}

bool UPDF_ReaderBPLibrary::PDF_Read_Bytes(UArrayObject*& Out_Byte_Object, TArray<uint8> In_Bytes)
{
	if (In_Bytes.Num() == 0)
	{
		return false;
	}

	UArrayObject* Byte_Object = NewObject<UArrayObject>();
	Byte_Object->Array_Bytes_32 = In_Bytes;

	Out_Byte_Object = Byte_Object;

	return true;
}

bool UPDF_ReaderBPLibrary::PDF_File_Open(UPDFiumDoc*& Out_PDF, UPARAM(ref)UArrayObject*& In_Byte_Object, FString In_PDF_Password)
{
	if (IsValid(In_Byte_Object) == false)
	{
		return false;
	}

	if (In_Byte_Object->Array_Bytes_32.Num() == 0 && In_Byte_Object->Array_Bytes_64.Num() == 0)
	{
		return false;
	}

	void* PDF_Data;
	size_t PDF_Data_Size;

	if (In_Byte_Object->Array_Bytes_64.Num() > 0)
	{
		PDF_Data = In_Byte_Object->Array_Bytes_64.GetData();
		PDF_Data_Size = In_Byte_Object->Array_Bytes_64.Num();
	}

	else
	{
		PDF_Data = In_Byte_Object->Array_Bytes_32.GetData();
		PDF_Data_Size = In_Byte_Object->Array_Bytes_32.Num();
	}

	UPDFiumDoc* PDF_Object = NewObject<UPDFiumDoc>();

#ifdef _WIN64
	PDF_Object->Document = FPDF_LoadMemDocument64(PDF_Data, PDF_Data_Size, TCHAR_TO_UTF8(*In_PDF_Password));
	FPDF_LoadXFA(PDF_Object->Document);
#else
	PDF_Object->Document = FPDF_LoadMemDocument(PDF_Data, PDF_Data_Size, TCHAR_TO_UTF8(*In_PDF_Password));
#endif

	if (!PDF_Object->Document)
	{
		return false;
	}

	Global_Docs_Pool.Add(PDF_Object->Document);
	
	Out_PDF = PDF_Object;

	return true;
}

bool UPDF_ReaderBPLibrary::PDF_File_Close(UPARAM(ref)UPDFiumDoc*& In_PDF)
{
	if (Global_bIsLibInitialized == false)
	{
		return false;
	}

	if (IsValid(In_PDF) == false)
	{
		return false;
	}

	if (!In_PDF->Document)
	{
		return false;
	}

	Global_Docs_Pool.Remove(In_PDF->Document);
	FPDF_CloseDocument(In_PDF->Document);
	In_PDF = nullptr;
	
	return true;
}

bool UPDF_ReaderBPLibrary::PDF_Close_All_Docs()
{
	if (Global_bIsLibInitialized == false)
	{
		return false;
	}

	TArray<FPDF_DOCUMENT> Array_Docs = Global_Docs_Pool.Array();
	for (int32 Index_Docs = 0; Index_Docs < Array_Docs.Num(); Index_Docs++)
	{
		if (Array_Docs[Index_Docs])
		{
			FPDF_CloseDocument(Array_Docs[Index_Docs]);
		}
	}

	Array_Docs.Empty();
	Global_Docs_Pool.Empty();

	return true;
}

bool UPDF_ReaderBPLibrary::PDF_Get_Pages(TMap<UTexture2D*, FVector2D>& Out_Pages, TArray<FPdfBytes>& Out_Pages_Bytes, UPARAM(ref)UPDFiumDoc*& In_PDF, double In_Sampling, bool bUseMatrix, bool sRgb, bool bUseBase64Url, FColor BG_Color)
{	
	if (Global_bIsLibInitialized == false)
	{
		return false;
	}

	if (IsValid(In_PDF) == false)
	{
		return false;
	}

	if (!In_PDF->Document)
	{
		return false;
	}

	double Sampling = 1;
	if (In_Sampling < 1)
	{
		Sampling = 1;
	}

	else
	{
		Sampling = In_Sampling;
	}

	for (int32 PageIndex = 0; PageIndex < FPDF_GetPageCount(In_PDF->Document); PageIndex++)
	{		
		FPDF_PAGE PDF_Page = FPDF_LoadPage(In_PDF->Document, PageIndex);
		double_t PDF_Page_Width = FPDF_GetPageWidth(PDF_Page);
		double_t PDF_Page_Height = FPDF_GetPageHeight(PDF_Page);

		FVector2D EachResolution = FVector2D(PDF_Page_Width, PDF_Page_Height);
		void* FirstScan = malloc(static_cast<SIZE_T>(PDF_Page_Width * PDF_Page_Height * Sampling * Sampling * 4));
		FPDF_BITMAP PDF_Bitmap = FPDFBitmap_CreateEx((int)(PDF_Page_Width * Sampling), (int)(PDF_Page_Height * Sampling), FPDFBitmap_BGRA, FirstScan, (int)(PDF_Page_Width * Sampling * 4));
		FPDFBitmap_FillRect(PDF_Bitmap, 0, 0, (PDF_Page_Width * Sampling), (PDF_Page_Height * Sampling), BG_Color.ToPackedARGB());
		
		FPDF_FORMHANDLE Form_Handle;
		FMemory::Memset(&Form_Handle, 0, sizeof(Form_Handle));
		FPDF_FFLDraw(Form_Handle, PDF_Bitmap, PDF_Page, 0, 0, (int)(PDF_Page_Width * Sampling), (int)(PDF_Page_Height * Sampling), 0, 0);

#ifdef _WIN64
		if (bUseMatrix == true)
		{
			FS_RECTF rc;
			FMemory::Memset(&rc, 0, sizeof(rc));
			rc.left = 0;
			rc.right = (PDF_Page_Width * Sampling) - 1;

			rc.top = 0;
			rc.bottom = (PDF_Page_Height * Sampling) - 1;
			
			FS_MATRIX transform;
			FMemory::Memset(&transform, 0, sizeof(transform));

			transform.a = 1 * Sampling;
			transform.b = 0;
			transform.c = 0;
			transform.d = 1 * Sampling;
			transform.e = 0;
			transform.f = 0;

			ENQUEUE_RENDER_COMMAND(UpdateTextureRegionsData)([&PDF_Bitmap, PDF_Page, &transform, &rc](FRHICommandListImmediate& CommandList)
				{
					FPDF_RenderPageBitmapWithMatrix(PDF_Bitmap, PDF_Page, &transform, &rc, FPDF_ANNOT);
				}
			);

			FlushRenderingCommands();
		}

		else
		{
			ENQUEUE_RENDER_COMMAND(UpdateTextureRegionsData)([&PDF_Bitmap, PDF_Page, PDF_Page_Width, PDF_Page_Height, Sampling](FRHICommandListImmediate& CommandList)
				{
					FPDF_RenderPageBitmap(PDF_Bitmap, PDF_Page, 0, 0, (int)(PDF_Page_Width * Sampling), (int)(PDF_Page_Height * Sampling), 0, FPDF_ANNOT);
				}
			);

			FlushRenderingCommands();
		}
#else
		ENQUEUE_RENDER_COMMAND(UpdateTextureRegionsData)([&PDF_Bitmap, PDF_Page, PDF_Page_Width, PDF_Page_Height, Sampling](FRHICommandListImmediate& CommandList)
			{
				FPDF_RenderPageBitmap(PDF_Bitmap, PDF_Page, 0, 0, (int)(PDF_Page_Width * Sampling), (int)(PDF_Page_Height * Sampling), 0, FPDF_ANNOT);
			}
		);

		FlushRenderingCommands();
#endif
		UTexture2D* PDF_Texture = UTexture2D::CreateTransient((int32)(PDF_Page_Width * Sampling), (int32)(PDF_Page_Height * Sampling), PF_B8G8R8A8);
		
		if (sRgb)
		{
			PDF_Texture->SRGB = 1;
		}

		else
		{
			PDF_Texture->SRGB = 0;
		}
		
		FTexture2DMipMap& PDF_Texture_Mip = PDF_Texture->GetPlatformData()->Mips[0];
		void* PDF_Texture_Data = PDF_Texture_Mip.BulkData.Lock(LOCK_READ_WRITE);

		void* Buffer = FPDFBitmap_GetBuffer(PDF_Bitmap);
		SIZE_T Size = static_cast<SIZE_T>(FPDFBitmap_GetStride(PDF_Bitmap)) * PDF_Page_Height * Sampling;
		FMemory::Memcpy(PDF_Texture_Data, Buffer, Size);

		// Bytes Export Start
		FString Base64 = FBase64::Encode((uint8*)Buffer, Size);
		if (bUseBase64Url)
		{
			Base64.ReplaceInline(TEXT("+"), TEXT("-"));
			Base64.ReplaceInline(TEXT("/"), TEXT("_"));
			Base64.ReplaceInline(TEXT("="), TEXT(""));
		}

		FPdfBytes PdfBytes;
		PdfBytes.Bytes_String = Base64;
		PdfBytes.Original_Resolution = EachResolution;
		PdfBytes.Sampling = Sampling;
		PdfBytes.bUseBase64Url = bUseBase64Url;
		// Bytes Export End

		PDF_Texture_Mip.BulkData.Unlock();
		PDF_Texture->UpdateResource();
		
		Out_Pages.Add(PDF_Texture, EachResolution);

		FPDFBitmap_Destroy(PDF_Bitmap);
		FPDF_ClosePage(PDF_Page);

		Out_Pages_Bytes.Add(PdfBytes);
	}

	if (Out_Pages.Num() > 0)
	{
		return true;
	}

	else
	{
		return false;
	}
}

bool UPDF_ReaderBPLibrary::PDF_Bytes_To_T2D(TMap<UTexture2D*, FVector2D>& Out_Pages, TArray<FPdfBytes> In_Pages_Bytes, bool sRgb)
{
	if (In_Pages_Bytes.Num() == 0)
	{
		return false;
	}

	for (int32 Index_Image = 0; Index_Image < In_Pages_Bytes.Num(); Index_Image++)
	{
		FString BytesString = In_Pages_Bytes[Index_Image].Bytes_String;
		if (In_Pages_Bytes[Index_Image].bUseBase64Url)
		{
			BytesString.ReplaceInline(TEXT("-"), TEXT("+"));
			BytesString.ReplaceInline(TEXT("_"), TEXT("/"));
		}

		TArray<uint8> Bytes;
		FBase64::Decode(BytesString, Bytes);

		UTexture2D* PDF_Texture = UTexture2D::CreateTransient(In_Pages_Bytes[Index_Image].Original_Resolution.X * In_Pages_Bytes[Index_Image].Sampling, In_Pages_Bytes[Index_Image].Original_Resolution.Y * In_Pages_Bytes[Index_Image].Sampling, PF_B8G8R8A8);

		if (sRgb)
		{
			PDF_Texture->SRGB = 1;
		}

		else
		{
			PDF_Texture->SRGB = 0;
		}

		FTexture2DMipMap& PDF_Texture_Mip = PDF_Texture->GetPlatformData()->Mips[0];
		void* PDF_Texture_Data = PDF_Texture_Mip.BulkData.Lock(LOCK_READ_WRITE);

		FMemory::Memcpy(PDF_Texture_Data, Bytes.GetData(), Bytes.Num());
		PDF_Texture_Mip.BulkData.Unlock();
		PDF_Texture->UpdateResource();

		FVector2D EachResolution;
		EachResolution.X = In_Pages_Bytes[Index_Image].Original_Resolution.X;
		EachResolution.Y = In_Pages_Bytes[Index_Image].Original_Resolution.Y;

		Out_Pages.Add(PDF_Texture, EachResolution);
	}

	return true;
}

bool UPDF_ReaderBPLibrary::PDF_Get_Texts(TArray<FString>& Out_Texts, UPARAM(ref)UPDFiumDoc*& In_PDF)
{
	if (Global_bIsLibInitialized == false)
	{
		return false;
	}

	if (IsValid(In_PDF) == false)
	{
		return false;
	}

	if (!In_PDF->Document)
	{
		return false;
	}

	for (int32 PageIndex = 0; PageIndex < FPDF_GetPageCount(In_PDF->Document); PageIndex++)
	{
		FPDF_PAGE PDF_Page = FPDF_LoadPage(In_PDF->Document, PageIndex);
		FPDF_TEXTPAGE PDF_TextPage = FPDFText_LoadPage(PDF_Page);

		int CharCount = FPDFText_CountChars(PDF_TextPage);
		unsigned short* CharBuffer = (unsigned short*)malloc(static_cast<size_t>(CharCount) * 4);
		FPDFText_GetText(PDF_TextPage, 0, CharCount, CharBuffer);

		FString PageText;
		PageText.AppendChars((WIDECHAR*)CharBuffer, CharCount);
		Out_Texts.Add(PageText);

		FPDFText_ClosePage(PDF_TextPage);
		FPDF_ClosePage(PDF_Page);
		free(CharBuffer);
	}

	return true;
}

bool UPDF_ReaderBPLibrary::PDF_Get_Links(TArray<FString>& Out_Links, UPARAM(ref)UPDFiumDoc*& In_PDF, int32 PageIndex)
{
	if (Global_bIsLibInitialized == false)
	{
		return false;
	}

	if (IsValid(In_PDF) == false)
	{
		return false;
	}

	if (!In_PDF->Document)
	{
		return false;
	}
	
	FPDF_PAGE PDF_Page = FPDF_LoadPage(In_PDF->Document, PageIndex);
	FPDF_TEXTPAGE PDF_TextPage = FPDFText_LoadPage(PDF_Page);

	FPDF_PAGELINK PDF_Links = FPDFLink_LoadWebLinks(PDF_TextPage);
	int32 Links_Count = FPDFLink_CountWebLinks(PDF_Links);

	if (Links_Count == 0)
	{
		FPDFLink_CloseWebLinks(PDF_Links);
		FPDFText_ClosePage(PDF_TextPage);
		
		return false;
	}

	for (int32 Index_Link = 0; Index_Link < Links_Count; Index_Link++)
	{
		int CharLenght = FPDFLink_GetURL(PDF_Links, Index_Link, NULL, NULL);
		unsigned short* CharBuffer = (unsigned short*)malloc(static_cast<size_t>(CharLenght) * 2);
		FPDFLink_GetURL(PDF_Links, Index_Link, CharBuffer, (CharLenght * 2));

		FString LinkText;
		LinkText.AppendChars((WIDECHAR*)CharBuffer, CharLenght);

		Out_Links.Add(LinkText);
		free(CharBuffer);
	}

	FPDFLink_CloseWebLinks(PDF_Links);
	FPDFText_ClosePage(PDF_TextPage);
	FPDF_ClosePage(PDF_Page);

	return true;
}

bool UPDF_ReaderBPLibrary::PDF_Select_Text(FString& Out_Text, UPARAM(ref)UPDFiumDoc*& In_PDF, FVector2D Start, FVector2D End, int32 PageIndex)
{
	if (Global_bIsLibInitialized == false)
	{
		return false;
	}

	if (IsValid(In_PDF) == false)
	{
		return false;
	}

	if (!In_PDF->Document)
	{
		return false;
	}

	FPDF_PAGE PDF_Page = FPDF_LoadPage(In_PDF->Document, PageIndex);
	FPDF_TEXTPAGE PDF_TextPage = FPDFText_LoadPage(PDF_Page);

	int CharLenght = FPDFText_GetBoundedText(PDF_TextPage, Start.X, Start.Y, End.X, End.Y, NULL, NULL);
	unsigned short* CharBuffer = (unsigned short*)malloc(static_cast<size_t>(CharLenght) * 2);
	FPDFText_GetBoundedText(PDF_TextPage, Start.X, Start.Y, End.X, End.Y, CharBuffer, (CharLenght * 2));
	
	FString SelectedText;
	SelectedText.AppendChars((WIDECHAR*)CharBuffer, CharLenght);

	Out_Text = SelectedText;

	FPDFText_ClosePage(PDF_TextPage);
	FPDF_ClosePage(PDF_Page);
	free(CharBuffer);

	return true;
}

bool UPDF_ReaderBPLibrary::PDF_Get_Pages_Count(int32& PagesCount, UPARAM(ref)UPDFiumDoc*& In_PDF)
{
	if (Global_bIsLibInitialized == false)
	{
		return false;
	}

	if (IsValid(In_PDF) == false)
	{
		return false;
	}

	if (!In_PDF->Document)
	{
		return false;
	}

	PagesCount = FPDF_GetPageCount(In_PDF->Document);

	return true;
}

bool UPDF_ReaderBPLibrary::PDF_Create_Doc(UPDFiumDoc*& Out_PDF)
{
#ifdef _WIN64
	if (Global_bIsLibInitialized == false)
	{
		return false;
	}

	UPDFiumDoc* PDF_Object = NewObject<UPDFiumDoc>();
	PDF_Object->Document = FPDF_CreateNewDocument();

	Out_PDF = PDF_Object;

	Global_Docs_Pool.Add(PDF_Object->Document);

	return true;
#else
	return false;
#endif
}

bool UPDF_ReaderBPLibrary::PDF_Add_Pages(UPARAM(ref)UPDFiumDoc*& In_PDF, TArray<FVector2D> Pages)
{
#ifdef _WIN64
	if (Global_bIsLibInitialized == false)
	{
		return false;
	}

	if (IsValid(In_PDF) == false)
	{
		return false;
	}

	if (!In_PDF->Document)
	{
		return false;
	}

	int32 PageCount = FPDF_GetPageCount(In_PDF->Document);

	for (int32 Index_Page = 0; Index_Page < Pages.Num(); Index_Page++)
	{
		FPDF_PAGE PDF_Page = FPDFPage_New(In_PDF->Document, PageCount + Index_Page, Pages[Index_Page].X, Pages[Index_Page].Y);
		FPDFPage_GenerateContent(PDF_Page);
		
		FPDF_ClosePage(PDF_Page);
	}

	return true;
#else
	return false;
#endif
}

bool UPDF_ReaderBPLibrary::PDF_Load_Font(UPDFiumFont*& Out_Font, UPARAM(ref)UPDFiumDoc*& In_PDF, FString Font_Path, bool bIsTrueType, bool bIsCid)
{
#ifdef PLATFORM_WINDOWS

	if (Global_bIsLibInitialized == false)
	{
		return false;
	}

	if (IsValid(In_PDF) == false)
	{
		return false;
	}

	if (!In_PDF->Document)
	{
		return false;
	}

	if (Font_Path.IsEmpty())
	{
		return false;
	}

	if (FPaths::FileExists(Font_Path) == false)
	{
		return false;
	}

	int FontType = 0;
	if (bIsTrueType == true)
	{
		FontType = FPDF_FONT_TRUETYPE;
	}

	else
	{
		FontType = FPDF_FONT_TYPE1;
	}

	FString Path = Font_Path;
	FPaths::NormalizeFilename(Path);

	TArray<uint8> Array_Bytes;
	FFileHelper::LoadFileToArray(Array_Bytes, *Path);

	FPDF_FONT Font = FPDFText_LoadFont(In_PDF->Document, Array_Bytes.GetData(), Array_Bytes.GetAllocatedSize(), FontType, bIsCid);
	if (!Font)
	{
		return false;
	}

	UPDFiumFont* FontObject = NewObject<UPDFiumFont>();
	FontObject->Font = Font;
	Out_Font = FontObject;

	return true;

#else
	return false;
#endif
}

bool UPDF_ReaderBPLibrary::PDF_Load_Standart_Font(UPDFiumFont*& Out_Font, UPARAM(ref)UPDFiumDoc*& In_PDF, EStandartFonts Font_Name)
{
#ifdef PLATFORM_WINDOWS
	if (Global_bIsLibInitialized == false)
	{
		return false;
	}

	if (IsValid(In_PDF) == false)
	{
		return false;
	}

	if (!In_PDF->Document)
	{
		return false;
	}

	FString Font_String;
	switch (Font_Name)
	{
	case EStandartFonts::Helvetica:
		Font_String = "Helvetica";
		break;
	case EStandartFonts::Helvetica_Italic:
		Font_String = "Helvetica-Italic";
		break;
	case EStandartFonts::Helvetica_Bold:
		Font_String = "Helvetica-Bold";
		break;
	case EStandartFonts::Helvetica_BoldItalic:
		Font_String = "Helvetica-BoldItalic";
		break;
	case EStandartFonts::Times_Roman:
		Font_String = "Times-Roman";
		break;
	case EStandartFonts::Times_Bold:
		Font_String = "Times-Bold";
		break;
	case EStandartFonts::Times_BoldItalic:
		Font_String = "Times-BoldItalic";
		break;
	case EStandartFonts::Times_Italic:
		Font_String = "Times-Italic";
		break;
	case EStandartFonts::Courier:
		Font_String = "Courier";
		break;
	case EStandartFonts::Courier_Bold:
		Font_String = "Courier-Bold";
		break;
	case EStandartFonts::Courier_Oblique:
		Font_String = "Courier-Oblique";
		break;
	case EStandartFonts::Courier_BoldOblique:
		Font_String = "Courier-BoldOblique";
		break;
	case EStandartFonts::Symbol:
		Font_String = "Symbol";
		break;
	case EStandartFonts::ZapfDingbats:
		Font_String = "ZapfDingbats";
		break;
	default:
		Font_String = "Helvetica";
		break;
	}

	FPDF_FONT Font = FPDFText_LoadStandardFont(In_PDF->Document, TCHAR_TO_UTF8(*Font_String));

	if (!Font)
	{
		return false;
	}
	
	UPDFiumFont* FontObject = NewObject<UPDFiumFont>();
	FontObject->Font = Font;

	Out_Font = FontObject;

	return true;

#else
	return false;
#endif
}

bool UPDF_ReaderBPLibrary::PDF_Close_Font(UPARAM(ref)UPDFiumFont*& In_Font)
{
#ifdef PLATFORM_WINDOWS
	
	if (Global_bIsLibInitialized == false)
	{
		return false;
	}

	if (IsValid(In_Font) == false)
	{
		return false;
	}

	FPDFFont_Close(In_Font->Font);

	return true;

#else
	return false;
#endif
}

void UPDF_ReaderBPLibrary::PDF_Add_Texts(FDelegateAddObject DelegateAddObject, UPARAM(ref)UPDFiumDoc*& In_PDF, UPARAM(ref)UPDFiumFont*& In_Font, FString In_Texts, FVector2D Position, FVector2D Shear, FVector2D Rotation, FVector2D Border, int32 FontSize, int32 PageIndex, bool bUseCharcodes, bool bGetCharcodesFromDb)
{
#ifdef PLATFORM_WINDOWS
	if (Global_bIsLibInitialized == false)
	{
		DelegateAddObject.Execute(false, "PDFium Library haven't been initialized.");
	}

	if (IsValid(In_PDF) == false)
	{
		DelegateAddObject.Execute(false, "PDF object is not valid.");
	}

	if (!In_PDF->Document)
	{
		DelegateAddObject.Execute(false, "PDF document is not valid.");
	}

	if (In_Texts.IsEmpty() == true)
	{
		DelegateAddObject.Execute(false, "Text is empty.");
	}

	if (IsValid(In_Font) == false)
	{
		DelegateAddObject.Execute(false, "Font object is invalid.");
	}

	AsyncTask(ENamedThreads::AnyNormalThreadNormalTask, [DelegateAddObject, &In_PDF, In_Font, In_Texts, Position, Shear, Rotation, Border, FontSize, PageIndex, bUseCharcodes, bGetCharcodesFromDb]()
		{
			FPDF_PAGE First_Page = FPDF_LoadPage(In_PDF->Document, PageIndex);
			TArray<FPDF_PAGE> Array_Pages;
			Array_Pages.Add(First_Page);

			int32 Acceptable_Horizontal = 2 * ((FPDF_GetPageWidth(First_Page) - Position.X - Border.X) / FontSize);
			int32 Acceptable_Vertical = (Position.Y - Border.Y) / FontSize;

			// Generate paragraphs.
			TArray<FString> Array_Paragraphs;
			if (In_Texts.Contains(LINE_TERMINATOR_ANSI) == true)
			{
				Array_Paragraphs = UKismetStringLibrary::ParseIntoArray(In_Texts, LINE_TERMINATOR_ANSI, false);
			}

			else
			{
				Array_Paragraphs.Add(In_Texts);
			}

			// Generate lines for text wrapping.
			TArray<FString> Array_Lines;
			for (int32 Index_Paragraphs = 0; Index_Paragraphs < Array_Paragraphs.Num(); Index_Paragraphs++)
			{
				FString Each_Paragraph = Array_Paragraphs[Index_Paragraphs];

				if (Each_Paragraph.IsEmpty())
				{
					Array_Lines.Add(" ");

					continue;
				}

				if (Each_Paragraph.Len() < Acceptable_Horizontal)
				{
					Array_Lines.Add(Each_Paragraph);

					continue;
				}

				bool bAllowChop = true;
				while (bAllowChop)
				{
					FString Each_Line = UKismetStringLibrary::Left(Each_Paragraph, Acceptable_Horizontal);
					Each_Paragraph = UKismetStringLibrary::RightChop(Each_Paragraph, Acceptable_Horizontal);

					if (UKismetStringLibrary::Left(Each_Line, 2) == "  ")
					{
						Array_Lines.Add(Each_Line.TrimEnd());
					}

					else
					{
						Array_Lines.Add(Each_Line.TrimStartAndEnd());
					}

					if (Each_Paragraph.Len() < Acceptable_Horizontal)
					{
						if (UKismetStringLibrary::Left(Each_Paragraph, 2) == "  ")
						{
							Array_Lines.Add(Each_Paragraph.TrimEnd());
						}

						else
						{
							Array_Lines.Add(Each_Paragraph.TrimStartAndEnd());
						}

						bAllowChop = false;
					}
				}
			}

			// Check if new pages are required or not.
			if (Array_Lines.Num() > Acceptable_Vertical)
			{
				TArray<FVector2D> NewPageSize;
				NewPageSize.Add(FVector2D(FPDF_GetPageWidth(First_Page), FPDF_GetPageHeight(First_Page)));

				int32 Extra_Page_Count = (Array_Lines.Num() / Acceptable_Vertical);
				for (int32 Index_Extra_Page = 0; Index_Extra_Page < Extra_Page_Count; Index_Extra_Page++)
				{
					UPDF_ReaderBPLibrary::PDF_Add_Pages(In_PDF, NewPageSize);
					FPDF_PAGE New_Page = FPDF_LoadPage(In_PDF->Document, (PageIndex + Index_Extra_Page + 1));
					Array_Pages.Add(New_Page);
				}
			}

			// Generate text objects.
			int32 ActivePage = 0;
			for (int32 Index_Lines = 0; Index_Lines < Array_Lines.Num(); Index_Lines++)
			{
				FPDF_PAGEOBJECT TextObject = FPDFPageObj_CreateTextObj(In_PDF->Document, In_Font->Font, FontSize);

				FString Each_Line = Array_Lines[Index_Lines];

				if (bUseCharcodes)
				{
					TArray<FString> Array_Chars = UKismetStringLibrary::GetCharacterArrayFromString(Each_Line);
					int32 CharsCount = Array_Chars.Num();

					uint32_t* CharCodes = (uint32_t*)malloc(CharsCount * sizeof(uint32_t));
					for (int32 Index_Chars = 0; Index_Chars < CharsCount; Index_Chars++)
					{
						FString Char = Array_Chars[Index_Chars];

						if (bGetCharcodesFromDb == true)
						{
							CharCodes[Index_Chars] = *Global_Char_To_ASCII.Find(Char);
						}

						else
						{
							CharCodes[Index_Chars] = UKismetStringLibrary::GetCharacterAsNumber(Char, 0);
						}
					}

					FPDFText_SetCharcodes(TextObject, CharCodes, CharsCount);
				}

				else
				{
					FPDFText_SetText(TextObject, TCHAR_TO_UTF16(*Each_Line));
				}

				FPDFPageObj_Transform(TextObject, Shear.X, Rotation.X, Rotation.Y, Shear.Y, Position.X, ((Position.Y * (ActivePage + 1)) - (FontSize * Index_Lines)));
				FPDFPage_InsertObject(Array_Pages[ActivePage], TextObject);
				FPDFPage_GenerateContent(Array_Pages[ActivePage]);

				// We are care about counts not index.
				if (((Index_Lines + 1) / (ActivePage + 1)) == Acceptable_Vertical)
				{
					ActivePage += 1;
				}
			}

			// Close all pages after writing.
			for (int32 Index_Page = 0; Index_Page < Array_Pages.Num(); Index_Page++)
			{
				FPDF_ClosePage(Array_Pages[Index_Page]);
			}

			AsyncTask(ENamedThreads::GameThread, [DelegateAddObject]()
				{
					DelegateAddObject.ExecuteIfBound(true, "Text object successfully added.");
				}
			);
		}
	);

#else
	DelegateAddObject.Execute(false, "PDF writer functions only avaible for Windows at the moment.");
#endif
}

bool UPDF_ReaderBPLibrary::PDF_Add_Image(UPARAM(ref)UPDFiumDoc*& In_PDF, UTexture2D* In_Texture, FVector2D Position, FVector2D Shear, FVector2D Rotation, int32 PageIndex)
{
#ifdef PLATFORM_WINDOWS

	if (Global_bIsLibInitialized == false)
	{
		return false;
	}

	if (IsValid(In_PDF) == false)
	{
		return false;
	}

	if (!In_PDF->Document)
	{
		return false;
	}

	FTexture2DMipMap& Texture_Mip = In_Texture->GetPlatformData()->Mips[0];
	void* Texture_Data = Texture_Mip.BulkData.Lock(LOCK_READ_WRITE);

	FPDF_PAGE PDF_Page = FPDF_LoadPage(In_PDF->Document, PageIndex);
	FPDF_PAGEOBJECT Image_Object = FPDFPageObj_NewImageObj(In_PDF->Document);

	FPDF_BITMAP Bitmap = FPDFBitmap_CreateEx(In_Texture->GetSizeX(), In_Texture->GetSizeY(), FPDFBitmap_BGRA, Texture_Data, (int)In_Texture->GetSizeX() * 4);
	FPDFImageObj_SetBitmap(&PDF_Page, 1, Image_Object, Bitmap);

	FPDFPageObj_Transform(Image_Object, Shear.X, Rotation.X, Rotation.Y, Shear.Y, Position.X, Position.Y);
	FPDFPage_InsertObject(PDF_Page, Image_Object);
	FPDFPage_GenerateContent(PDF_Page);

	FPDFBitmap_Destroy(Bitmap);
	Texture_Mip.BulkData.Unlock();

	FPDF_ClosePage(PDF_Page);

	return true;

#else
	return false;
#endif
}

int WriteCallback(FPDF_FILEWRITE* pThis, const void* pData, unsigned long size)
{
#ifdef PLATFORM_WINDOWS
	std::string data;
	data.append(static_cast<const char*>(pData), size);
	
	std::ofstream filestream_;
	filestream_.open(TCHAR_TO_UTF8(*Global_PDF_Export_Path), std::ios_base::binary);
	if (filestream_.is_open()) filestream_.write(static_cast<const char*>(pData), size);
	filestream_.close();

	return size;
#else
	return 0;
#endif
}

bool UPDF_ReaderBPLibrary::PDF_Save_PDF(TMap<UPDFiumDoc*, FString> Exports)
{
#ifdef PLATFORM_WINDOWS
	if (Exports.Num() == 0)
	{
		return false;
	}
	
	if (Global_bIsLibInitialized == false)
	{
		return false;
	}

	TArray<UPDFiumDoc*> Array_Docs;
	Exports.GetKeys(Array_Docs);

	for (int32 Index_Docs = 0; Index_Docs < Array_Docs.Num(); Index_Docs++)
	{
		if (IsValid(Array_Docs[Index_Docs]) == false)
		{
			return false;
		}

		if (!Array_Docs[Index_Docs]->Document)
		{
			return false;
		}

		Global_PDF_Export_Path = *Exports.Find(Array_Docs[Index_Docs]);

		FPDF_FILEWRITE Writer;
		memset(&Writer, 0, sizeof(FPDF_FILEWRITE));

		Writer.version = 1;
		Writer.WriteBlock = WriteCallback;
		FPDF_SaveAsCopy(Array_Docs[Index_Docs]->Document, &Writer, 3);
	}

	return true;
#else
	return false;
#endif
}