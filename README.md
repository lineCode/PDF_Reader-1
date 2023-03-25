# USED LIBRARIES
Android Binary<br />
https://github.com/barteksc/PdfiumAndroid

Windows Binary<br />
https://github.com/bblanchon/pdfium-binaries

# DEPENDENCIES
In order to view online PDF files, you have to use a HTTP Client plugin.<br />

1- If you don't need HTTPS you can use ours.<br />
https://github.com/FF-Projects-UE/HTTP_Client

2- If you need HTTPS, write your own client plugin or get from Github/Unreal Marketplace.<br />
My personaly choice is Low Entry HTTP Request<br />
https://www.unrealengine.com/marketplace/en-US/product/low-entry-http-request

# FEATURES
* Plugin is for Unreal Engine 5.1 and up.
* Windows and Android platforms supported. This is runtime plugin. It don't work in editor. 
* There is a helper node to give android absolute path.
* Get Pages: It will give an Map of (Key: Texture2D, Value: Width and Height) pages as textures.
* Get Texts: It will get all texts of all pages.
* Select Text: You can think this as a somekind of text selection. It will get text/strings in a rectangle area. You have to define that rectangle's size and location according with PDF's size and location.<br />
  Don't use your cursor location directly. ((Cursor Location - PDF Location at screen) * Sampling will give you necessary locations.)
* Get Links: It will give all "weblinks" in specified page. It won't give internal bridges. It will give weblinks. This is limitation of PDFium.
* Get Pages Count: You know what it does.
* PDF Read File Close: It will close opened document.
* PDF_LibInit / PDF_LibClose / PDF_LibState: It will initialize, close and give state of PDFium library.

# USAGE
* You need to use it in a C++ project. After first compile, you can copy it to a blueprint only project.
* Do NOT close PDF document unless you absolutely sure that you won't use it anymore.
* When you close your game or finish your job with that document, close that PDF document.
* When you close your game, you have to close library as well.