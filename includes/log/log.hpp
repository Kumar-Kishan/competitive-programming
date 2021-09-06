#pragma once

#include "spdlog/sinks/basic_file_sink.h"
#include "spdlog/spdlog.h"

namespace Log
{
    template <typename... Args>
    void Info(Args... args) { spdlog::info(args...); }

    template <typename... Args>
    void Error(Args... args) { spdlog::error(args...); }

    template <typename... Args>
    void Debug(Args... args) { spdlog::debug(args...); }
} // namespace Log