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
		while (true)
		{
			static unsigned long n = -1;
			printf("%lu\n", ++n);
		}
	}
}