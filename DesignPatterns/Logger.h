#pragma once
#include <string>
#include <mutex>
using namespace std;

class Logger
{
public:
	~Logger();
	static Logger* GetLogger();
	void Log(const string &s);
	Logger(const Logger& log) = delete;
	Logger operator=(const Logger& log) = delete;
private:
	Logger();
	static int counter;
	static Logger* logger;
	static mutex mtxLock;
};

