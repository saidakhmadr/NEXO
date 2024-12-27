#pragma once

#ifdef NEXO_ENGINE
extern nexo::Engine* nexo::CreateApp();

int main(int argc, char** argv) {
	auto game = nexo::CreateApp();
	game->Run();
	delete game;
}

#endif