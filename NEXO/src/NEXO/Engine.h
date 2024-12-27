#pragma once
#include "Core.h"
#include <iostream>
namespace nexo {
	class NEXO_API Engine
	{
	public:
		Engine();
		virtual ~Engine();
		void Run();
	};

	Engine* CreateApp();
}

