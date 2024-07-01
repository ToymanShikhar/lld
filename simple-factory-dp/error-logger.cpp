#pragma one
#include <iostream>

#include "logger.cpp"

using namespace std;

class ErrorLogger : public Logger {
   public:
    void log(string message) {
        cout << "ERROR: " << message << endl;
    }
};