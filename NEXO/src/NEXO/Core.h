#pragma once
#include <iostream>
#ifdef NEXO_WINDOWS
	#ifdef NEXO_BUILD_DLL
		#define NEXO_API __declspec(dllexport)
	#else
		#define NEXO_API __declspec(dllimport)
	#endif
#else
	#error NEXO only supports Windows!
#endif