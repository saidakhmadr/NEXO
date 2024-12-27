#pragma once

#ifdef NEXO_ENGINE
	#ifdef NEXO_BUILD_DLL
		#define NEXO_API __declspec(dllexport)
	#else
		#define NEXO_API __declspec(dllimport)
	#endif
#else
	#error NEXO finished with errors!
#endif
