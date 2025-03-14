#include<iostream>
#include "Logger.h"
#include <string>

using namespace std;

Logger::Logger()
{
	counter++;
	cout << "Logger instance has been created\n Number of instances : "<< counter << endl;
}

int Logger::counter = 0;

Logger* Logger::logger = nullptr;

mutex Logger::mtxLock;

Logger::~Logger()
{
	if (logger != nullptr)
	{
		delete logger;
		logger = nullptr;
	}
}

Logger* Logger::GetLogger()
{
	if (logger == nullptr) // douuble checking to avoid if logger already instantiated.
	{
		mtxLock.lock();

		if (logger == nullptr)
		{
			logger = new Logger();
		}

		mtxLock.unlock();
	}

	return logger;
}

void Logger::Log(const string &s)
{
	cout << s << endl;
}
