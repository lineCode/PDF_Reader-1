# USED LIBRARIES
Android Binary
https://github.com/barteksc/PdfiumAndroid

Windows Binary
https://github.com/bblanchon/pdfium-binaries

# DEPENDENCIES
* In order to view online PDF files, you have to use a HTTP Client plugin.<br />

1- If you don't need HTTPS you can use ours.
https://github.com/FF-Projects-UE/HTTP_Client

2- If you need HTTPS, write your own client plugin or get from Github/Unreal Marketplace.
My personaly choice is Low Entry HTTP Request
https://www.unrealengine.com/marketplace/en-US/product/low-entry-http-request

# FEATURES
* Plugin is for Unreal Engine 5.1 and up.
* Windows and Android platforms supported. This is runtime plugin. It don't work in editor. 
* There is a helper node to give android absolute path.
* Generate Texts: It will get all texts of all pages.
* Generate Text At Area: You can think this as a text selection. It will get texts in a rectangle area. You have to define that rectangle's size according with PDF's size and location. Don't use your cursor location directly. (Cursor location minus PDF location at screen will give result.)
* Generate Links: It will give all "weblinks" in specified page. It won't give internal bridges. It will give weblinks. This is limitation of PDFium.
* Get Pages Count: You know what it does.
* PDF Read File Close: It will close opened document.
* PDF_LibInit / PDF_LibClose / PDF_LibState: It will initialize, close and give state of PDFium library.

# USAGE
* You need to use it in a C++ project. After first compile, you can copy it to a blueprint only project.
* Do NOT close PDF document unless you absolutely sure that you won't use it anymore.
* When you close your game or finish your job with that document, close that PDF document.
* When you close your game, you have to close library as well.