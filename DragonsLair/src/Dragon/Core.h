#pragma once

#ifdef DL_PLATFORM_WINDOWS
	#ifdef DL_BUILD_DLL
		#define DRAGON_API __declspec(dllexport)
	#else
		#define DRAGON_API __declspec(dllimport)
	#endif
#else
	#error Dragon's lair only supports Windows!
#endif
