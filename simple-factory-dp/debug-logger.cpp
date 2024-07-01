#pragma one
#include <iostream>

#include "logger.cpp"

using namespace std;

class DebugLogger : public Logger {
   public:
    void log(string message) {
        cout << "DEBUG: " << message << endl;
    }
};