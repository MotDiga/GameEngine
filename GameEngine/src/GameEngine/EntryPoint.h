#pragma once
#include "Core.h"

#ifdef GE_PLATFORM_WINDOWS

//extern GameEngine::Application* GameEngine::CreateApplication();

int main(int argc, char* argv[])
{
	GameEngine::Log::Init();
	GE_WARN("Initialised log");
	GE_CORE_TRACE("Var = {0}", 5);

	auto app = GameEngine::CreateApplication();
	app->Run();
	delete app;

	return 0;
}

#endif // GE_PLATFORM_WINDOWS