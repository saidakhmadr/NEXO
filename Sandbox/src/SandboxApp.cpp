#include <Nexo.h>

class Sandbox : public nexo::Engine
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

nexo::Engine* nexo::CreateApp()
{
	return new Sandbox();
}