#pragma once
#include "Core.h"
#include "Log/Log.h"
#include "Events/Event.h"
#include "Events/ApplicationEvent.h"

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