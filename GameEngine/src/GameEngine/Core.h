#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#ifdef _PLATFORM_WINDOWS
	#ifdef _BUILD_DLL
		#define GE_API __declspec(dllexport)
	#else
		#define GE_API __declspec(dllimport)
	#endif // GE_BUILD_DLL
#else
	#error 
#endif // GE_PLATFORM_WINDOWS

#define BIT(x) (1 << x)