#pragma once

#ifdef NEXO_WINDOWS

extern nexo::Engine* nexo::CreateApp();

int main(int argc, char** argv)
{
	auto app = nexo::CreateApp();
	app->Run();
	delete app;
}

#endif