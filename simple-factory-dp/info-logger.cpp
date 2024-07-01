#pragma one
#include <iostream>

#include "logger.cpp"

using namespace std;

class InfoLogger : public Logger {
   public:
    void log(string message) {
        cout << "INFO: " << message << endl;
    }
};