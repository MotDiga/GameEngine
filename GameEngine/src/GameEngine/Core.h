#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
typedef char* string_t;
typedef unsigned char* ustring_t;

#ifdef GE_PLATFORM_WINDOWS
	#ifdef GE_BUILD_DLL
		#define GE_API __declspec(dllexport)
	#else
		#define GE_API __declspec(dllimport)
	#endif // GE_BUILD_DLL
#else
	#error 
#endif // GE_PLATFORM_WINDOWS