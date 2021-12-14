#pragma once

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/sinks/basic_file_sink.h"


#define BATHROOM_STATE "bathroom_state"
#define BATHROOM_SENSOR "bathroom_sensor"


#define STATE_TRACE(...) if (spdlog::get(BATHROOM_STATE) != nullptr) {spdlog::get(BATHROOM_STATE)->trace(__VA_ARGS__); }
#define STATE_DEBUG(...) if (spdlog::get(BATHROOM_STATE) != nullptr) {spdlog::get(BATHROOM_STATE)->debug(__VA_ARGS__); }
#define STATE_INFO(...) if (spdlog::get(BATHROOM_STATE) != nullptr) {spdlog::get(BATHROOM_STATE)->info(__VA_ARGS__); }
#define STATE_WARN(...) if (spdlog::get(BATHROOM_STATE) != nullptr) {spdlog::get(BATHROOM_STATE)->warn(__VA_ARGS__); }
#define STATE_ERROR(...) if (spdlog::get(BATHROOM_STATE) != nullptr) {spdlog::get(BATHROOM_STATE)->error(__VA_ARGS__); }
#define STATE_CRITICAL(...) if (spdlog::get(BATHROOM_STATE) != nullptr) {spdlog::get(BATHROOM_STATE)->critical(__VA_ARGS__); }

#define SENS_TRACE(...) if (spdlog::get(BATHROOM_SENSOR) != nullptr) {spdlog::get(BATHROOM_SENSOR)->trace(__VA_ARGS__); }
#define SENS_DEBUG(...) if (spdlog::get(BATHROOM_SENSOR) != nullptr) {spdlog::get(BATHROOM_SENSOR)->debug(__VA_ARGS__); }
#define SENS_INFO(...) if (spdlog::get(BATHROOM_SENSOR) != nullptr) {spdlog::get(BATHROOM_SENSOR)->info(__VA_ARGS__); }
#define SENS_WARN(...) if (spdlog::get(BATHROOM_SENSOR) != nullptr) {spdlog::get(BATHROOM_SENSOR)->warn(__VA_ARGS__); }
#define SENS_ERROR(...) if (spdlog::get(BATHROOM_SENSOR) != nullptr) {spdlog::get(BATHROOM_SENSOR)->error(__VA_ARGS__); }
#define SENS_CRITICAL(...) if (spdlog::get(BATHROOM_SENSOR) != nullptr) {spdlog::get(BATHROOM_SENSOR)->critical(__VA_ARGS__); }
