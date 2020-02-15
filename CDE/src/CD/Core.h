#pragma once

#ifdef CD_PLATFORM_WINDOWS
	#ifdef CD_BUILD_DLL
		#define CD_API __declspec(dllexport)
	#else
		#define CD_API __declspec(dllimport)
	#endif // CD_BUILD_DLL
#endif // CD_PLATFORM_WINDOWS

