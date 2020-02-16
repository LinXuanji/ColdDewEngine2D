#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace cde {

	class CD_API Log
	{
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	};

}

//core log macros
#define CD_CORE_ERROR(...) ::cde::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CD_CORE_WARN(...) ::cde::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CD_CORE_INFO(...) ::cde::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CD_CORE_TRACE(...) ::cde::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CD_CORE_FATAL(...) ::cde::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//client log macros
#define CD_ERROR(...) ::cde::Log::GetClientLogger()->error(__VA_ARGS__)
#define CD_WARN(...) ::cde::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CD_INFO(...) ::cde::Log::GetClientLogger()->info(__VA_ARGS__)
#define CD_TRACE(...) ::cde::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CD_FATAL(...) ::cde::Log::GetClientLogger()->fatal(__VA_ARGS__)
