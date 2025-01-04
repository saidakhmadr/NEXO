#pragma once

#include "Core.h"

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