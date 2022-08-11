#include <PreCompiledHeaders.h>
#include "Log.h"

namespace GameEngine
{
	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	void Log::Init()
	{
		spdlog::set_pattern("%^[%a %D][%T.%e](%n): %v%$");
		s_CoreLogger = spdlog::stdout_color_mt("GameEngine");
		s_CoreLogger->set_level(spdlog::level::level_enum::trace);
		s_ClientLogger = spdlog::stdout_color_mt("SandBox");
		s_ClientLogger->set_level(spdlog::level::level_enum::trace);
	}
}