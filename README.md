# USED LIBRARIES
Android Binary
https://github.com/barteksc/PdfiumAndroid

Windows Binary
https://github.com/bblanchon/pdfium-binaries

# DEPENDENCIES
Low Entry HTTP Request
https://www.unrealengine.com/marketplace/en-US/product/low-entry-http-request

There is a template widget in plugin's content folder but it uses HTTP GET Request nodes from Low Entry.
If you need to view online pdf files, you need to use an HTTP plugin with ByteArray support. If you have another one or you want to use only local PDFs, just delete that nodes.

Even if you don't want to view online PDF files, you need to attach an empty array to ByteArray pin of Read PDF function. You can use "Make Array" node.

# RELEASE
Relaese has an APK for ASTC arm64-v8 to test it.

# FEATURES
* Plugin is for Unreal Engine 5.1 and up.
* Windows and Android platforms supported. This is runtime plugin. It don't work in editor. 
* There is a helper node to give android absolute path.

# USAGE
You need to use it in a C++ project. After first compile, you can copy it to a blueprint only project.

## SAMPLE RENDER CODE
```
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

FPDF_RenderPageBitmapWithMatrix(PDF_Bitmap, PDF_Page, &transform, &rc, FPDF_ANNOT);
````