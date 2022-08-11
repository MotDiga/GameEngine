#pragma once
#include <GameEngine/Core.h>
#include <GameEngine/Log/Log.h>
#include <GameEngine/Events/Event.h>
#include <GameEngine/Events/ApplicationEvent.h>

namespace GameEngine
{
	class GE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application *CreateApplication();
}