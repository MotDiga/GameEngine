workspace "GameEngine"
	startproject "SandBox"
	architecture "x64"
	configurations {
		"Debug",
		"Release",
		"Dist"
	}

	outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "GameEngine"
	location "GameEngine"
	kind "SharedLib"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-obj/" .. outputdir .. "/%{prj.name}")

	files {
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp",
		"%{prj.name}/src/**.c"
	}
	includedirs {
		"include",
		"include/spdlog/include",
		"%{prj.name}/src/"
	}

	filter "system:windows"
		cppdialect "C++20"
		staticruntime "On"
		systemversion "latest"

		defines {
			"_PLATFORM_WINDOWS",
			"_BUILD_DLL"
		}

		postbuildcommands {
		    ("{COPY} \"%{cfg.buildtarget.relpath}\" \"../bin/" .. outputdir .. "/SandBox\"")
		}

	filter "configurations:Debug"
		defines "_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "_RELEASE"
		optimize "On"

	filter "configurations:Dist"
		defines "_DIST"
		optimize "On"

project "SandBox"
	location "SandBox"
	kind "ConsoleApp"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-obj/" .. outputdir .. "/%{prj.name}")

	files {
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}
	includedirs {
		"include",
		"include/spdlog/include",
		"%{prj.name}/src/",
		"GameEngine/src/"
	}

	links {
		"GameEngine"
	}

	filter "system:windows"
		cppdialect "C++20"
		staticruntime "On"
		systemversion "latest"

		defines {
			"_PLATFORM_WINDOWS"
		}

	filter "configurations:Debug"
		defines "_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "_RELEASE"
		optimize "On"

	filter "configurations:Dist"
		defines "_DIST"
		optimize "On"