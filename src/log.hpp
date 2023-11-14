#pragma once
#include <iostream>

class Log {
  public:
    enum Levels { levelError = 0, levelWarn, levelInfo };

  private:
    Levels m_logLevel = levelInfo;

  public:
    void setLevel(Levels level) { m_logLevel = level; }

    void error(const char* message) {
        if (m_logLevel >= levelError)
            std::cout << "[ERROR]: " << message << std::endl;
    }
    void warn(const char* message) {
        if (m_logLevel >= levelWarn)
            std::cout << "[WARNING]: " << message << std::endl;
    }
    void info(const char* message) {
        if (m_logLevel >= levelInfo)
            std::cout << "[INFO]: " << message << std::endl;
    }
};
