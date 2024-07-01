#pragma once
#include <string>

using namespace std;

class Logger {
   public:
    virtual void log(string message) = 0;
};