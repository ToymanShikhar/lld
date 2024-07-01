#include "logger-factory.cpp"
#include "logger.cpp"

int main() {
    Logger* debugLogger = LoggerFactory::createLogger(LogLevels::DEBUG);
    Logger* infoLogger = LoggerFactory::createLogger(LogLevels::INFO);
    Logger* errorLogger = LoggerFactory::createLogger(LogLevels::ERROR);

    debugLogger->log("This is a DEBUG log message.");
    infoLogger->log("This is a INFO log message.");
    errorLogger->log("This is a ERROR log message.");

    return 0;
}