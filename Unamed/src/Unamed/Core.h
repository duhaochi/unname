#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define UNAMED_API __declspec(dllexport)
	#else
		#define UNAMED_API __declspec(dllimport)	
	#endif
#else
	#error Unamed only runs on Windows10 (for now)

#endif