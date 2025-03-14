
#include <iostream>
#include "Logger.h"
#include <thread>

void user1Logs()
{
	Logger* log1 = Logger::GetLogger();

	log1->Log("User 1 logs");
}


void user2Logs()
{
	Logger* log2 = Logger::GetLogger();

	log2->Log("User 2 logs");
}

int main()
{
	thread t1(user1Logs), t2(user2Logs);

	t1.join();
	t2.join();

}