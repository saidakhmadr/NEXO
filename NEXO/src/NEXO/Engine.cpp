#include "Engine.h"

namespace nexo {

	Engine::Engine()
	{
	}


	Engine::~Engine()
	{
	}

	void Engine::Run()
	{
		while (true) {
			std::cout << "Hello from NEXO! Engine is created!!\n";
		}
	}

}