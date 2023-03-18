// Some copyright should be here...

using System;
using System.IO;
using UnrealBuildTool;

public class PDF_Reader : ModuleRules
{
	public PDF_Reader(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        if (UnrealTargetPlatform.Win64 == Target.Platform)
        {
            string Location_PDFium = "../Source/PDF_Reader/ThirdParty/pdfium/Windows/include";
            PrivateIncludePaths.Add(Location_PDFium);
            
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "ThirdParty", "pdfium", "Windows", "lib", "pdfium.dll.lib"));
            RuntimeDependencies.Add(Path.Combine(ModuleDirectory, "ThirdParty", "pdfium", "Windows", "lib", "pdfium.dll"));
            PublicDelayLoadDLLs.Add("pdfium.dll");
        }

        if (UnrealTargetPlatform.Android == Target.Platform)
        {
            // We need it for #include "AndroidPlatform.h" in fpdview.h. Because default #define DLLEXPORT makes clash with Unreal's defination. We comment it out and include AndroidPlatform.h
            PublicIncludePaths.Add(Path.Combine(EngineDirectory, "Source", "Runtime", "Core", "Public", "Android"));

            string Location_PDFium = "../Source/PDF_Reader/ThirdParty/pdfium/Android/include";
            PrivateIncludePaths.Add(Location_PDFium);

            PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "ThirdParty", "pdfium", "Android", "lib", "arm64-v8a", "libmodft2.so"));
            PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "ThirdParty", "pdfium", "Android", "lib", "arm64-v8a", "libmodpdfium.so"));
            PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "ThirdParty", "pdfium", "Android", "lib", "arm64-v8a", "libmodpng.so"));

            AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(ModuleDirectory, "PDF_Reader_UPL_Android.xml"));
        }

        PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
                "Slate",
				"SlateCore",
                "Projects",
				"HTTP",
                "RHI",
				"RenderCore"
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}