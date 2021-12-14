#ifndef LOGGER_H
#define LOGGER_H

#include <memory>

#include "log.h"

class LogManager
{
public:
    LogManager() = default;
    ~LogManager() = default;

    void initialize();
    void shutdown();

};

#endif // LOGGER_H
