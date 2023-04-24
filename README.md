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

# TARGET PLATFORM
* Plugin is for Unreal Engine 5.1 and up.
* This is a "runtime" plugin. It won't work on editor.
* Android platform can render PDF file and get texts but it can't create new PDF file.
* Windows platform can render PDF file, get texts and create new PDF file.

# FEATURES
* <b>PDF Android Path HelperThere</b>: It gives real absolute path of file on Android.

* <b>Get Pages</b>: It will give an Map of (Key: Texture2D, Value: Width and Height) pages as textures.

* <b>Get Texts</b>: It will get all texts of all pages.

* <b>Select Text</b>: You can think this as a somekind of text selection. It will get text/strings in a rectangle area.
	* You have to define that rectangle's size and location according with PDF's size and location.
	* Don't use your cursor location directly.
	* Sample math: (Cursor Location - PDF Location at screen) * Sampling (value which you used on Get Pages)

* <b>Get Links</b>: It will give all "weblinks" in specified page. It won't give internal bridges. It will give weblinks. This is limitation of PDFium.

* <b>Get Pages Count</b>: You know what it does.

* <b>PDF Read File Close</b>: It will close opened document.

* <b>PDF_LibInit / PDF_LibClose / PDF_LibState</b>: It will initialize, close and give state of PDFium library.

* <b>Create PDF</b>: It creates a new and empty PDF file.

* <b>Add Pages</b>: It adds pages to target PDF file with defined size. (Array count is page count and each vector element of array is its size)

* <b>Add Texts</b>: It adds text objects to target page. PDFium doesn't support line break at default but we integrated a parse system. So it has auto wrap feature. Neverthless, we suggest you that be careful about your layout (for example when will you create a line break or not)
	* Position X = Horizontal position.
	* Position Y = Vertical position but it starts from bottom. If your PDF page's height is 800 pixel, top will be 800 and bottom will be 0.
	* Shear X and Y = It strecth your text object. Scaling won't be vectoral. So we don't suggest it.
	* Rotation X and Y = We don't know how it works right now.
	* Border X and Y = It defines vertical and horizontal borders.
	* Use Charcodes: Frontend usage from blueprints are same but at backend it switches between ASCII Decimal based "FPDFText_SetCharcodes()" and "FPDFText_SetText()". Charcodes has better character support.
	
* <b>Add Images</b>: We have not finished it, yet.
* <b>Save PDF</b>: It save pdf file to target location.
	* <b>IMPORTANT ! CALL THIS ONLY FROM A SINGLE PLACE ! STORE ALL YOUR CREATED PDF FILES AND WRITE THEM ALL AT ONCE ! IT USES C CALLBACK AND ITS PURPOSE IS SINGLE FILE EXPORT AT THE SAME TIME !</b>
	* For multiple save cases, you can export all your PDF objects to different (or same) location in a for loop after you finish your job.
	* You don't have to save your PDF file when you add something to it. It automaticaly refresh it.

# USAGE
* You need to use it in a C++ project. After first compile, you can copy it to a blueprint only project.
* Do NOT close PDF document unless you absolutely sure that you won't use it anymore.
* When you close your game or finish your job with that document, close that PDF document.
* When you close your game, you have to close library as well.
* if you want to "view" changes which you did on your newly created PDF file in UE5, you need to render it "again" and assign it to your widget or material.