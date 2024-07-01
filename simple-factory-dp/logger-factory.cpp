#pragma once
#include <string>

#include "constants.hpp"
#include "debug-logger.cpp"
#include "error-logger.cpp"
#include "info-logger.cpp"
#include "logger.cpp"

using namespace std;

class LoggerFactory {
   public:
    static Logger* createLogger(LogLevels logLevel) {
        switch (logLevel) {
            case LogLevels::ERROR:
                return new ErrorLogger();
                break;

            case LogLevels::DEBUG:
                return new DebugLogger();
                break;

            case LogLevels::INFO:
                return new InfoLogger();
                break;

            default:
                break;
        }
    }
};