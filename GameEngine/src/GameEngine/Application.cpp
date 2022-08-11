#include <PreCompiledHeaders.h>
#include "Application.h"

namespace GameEngine
{
	Application::Application()
	{
		//!
	}
	Application::~Application()
	{
		//!
	}
	void Application::Run()
	{
		WindowResizeEvent e(960, 540);
		LOG_TRACE(e);

		while (true)
		{
			//!
		}
	}
}