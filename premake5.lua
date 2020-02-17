workspace "CDE"
	architecture "x64"
	
	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}
	
outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"
	
project "CDE"
	location "CDE"
	kind "SharedLib"
	language "C++"
	
	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	
	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}
	
	includedirs
	{
		"%{prj.name}/vendor/spdlog-1.x/include"
	}
	
	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "10.0.18362.0"
		
		defines
		{
			"CD_PLATFORM_WINDOWS",
			"CD_BUILD_DLL",
		}
	
	filter "configurations:Debug"
		defines "CDE_DEBUG"
		symbols "On"
		
	filter "configurations:Release"
		defines "CDE_RELEASE"
		optimize "On"
		
	filter "configurations:Dist"
		defines "CDE_DIST"
		optimize "On"
		
project "1944"
	location "1944"
	kind "ConsoleApp"
	language "C++"
	
	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	
	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}
	
	includedirs
	{
		"CDE/vendor/spdlog-1.x/include",
		"CDE/src"
	}
	
	links
	{
		"CDE"
	}
	
	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "10.0.18362.0"
		
		defines
		{
			"CD_PLATFORM_WINDOWS"
		}
	
	filter "configurations:Debug"
		defines "CDE_DEBUG"
		symbols "On"
		
	filter "configurations:Release"
		defines "CDE_RELEASE"
		optimize "On"
		
	filter "configurations:Dist"
		defines "CDE_DIST"
		optimize "On"

	