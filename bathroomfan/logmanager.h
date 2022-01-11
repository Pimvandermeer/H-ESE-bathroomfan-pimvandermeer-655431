#ifndef LOGGER_H
#define LOGGER_H

#include <memory>

#include "log.h"

/*This class initiales the spdlog object and makes logger share among the differnt classes
 *there is a file sink to write the log too.
 */

class LogManager
{
public:
    LogManager() = default;
    ~LogManager() = default;

    void initialize();
    void shutdown();
};

#endif // LOGGER_H
