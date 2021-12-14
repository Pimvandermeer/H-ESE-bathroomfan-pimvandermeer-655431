#include "logmanager.h"

void LogManager::initialize()
{
    auto consoleSink = std::make_shared<spdlog::sinks::stderr_color_sink_mt>();
    auto fileSink = std::make_shared<spdlog::sinks::basic_file_sink_mt>("../logs/log.txt", false);

    std::vector<spdlog::sink_ptr> sinks{consoleSink, fileSink};

    auto logger = std::make_shared<spdlog::logger>(BATHROOM_STATE, sinks.begin(), sinks.end());
    logger->set_level(spdlog::level::trace);
    logger->flush_on(spdlog::level::trace);
    spdlog::register_logger(logger);

    auto loggersens = std::make_shared<spdlog::logger>(BATHROOM_SENSOR, sinks.begin(), sinks.end());
    loggersens->set_level(spdlog::level::trace);
    loggersens->flush_on(spdlog::level::trace);
    spdlog::register_logger(loggersens);
}

void LogManager::shutdown()
{
    spdlog::shutdown();
}
