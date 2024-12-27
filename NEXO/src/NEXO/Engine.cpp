#include "Engine.h"
namespace nexo {
	Engine::Engine()
	{
	}
	Engine::~Engine()
	{
	}
	void Engine::Run() {
		int n{ 0 };
		while (1) {
			std::cout << "Hello from NEXO Engine! cnt: " << n << '\n';
			++n;
		}
	}
}