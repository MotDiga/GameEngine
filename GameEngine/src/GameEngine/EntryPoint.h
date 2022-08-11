#pragma once
#include <GameEngine/Core.h>

#ifdef _PLATFORM_WINDOWS

extern GameEngine::Application* GameEngine::CreateApplication();

int main(int argc, char* argv[])
{
	GameEngine::Log::Init();
	auto app = GameEngine::CreateApplication();
	app->Run();
	delete app;

	return 0;
}

#endif // GE_PLATFORM_WINDOWS