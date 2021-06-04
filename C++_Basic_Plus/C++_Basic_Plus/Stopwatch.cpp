#include "Stopwatch.h"
#include <ctime>

StopWatch::StopWatch()
{
	startTime = clock();
	endTime = startTime;
}

unsigned long long StopWatch::getstarttime()
{
	return startTime;
}

unsigned long long StopWatch::getendtime()
{
	return endTime;
}

void StopWatch::start()
{
	startTime = clock();
}

void StopWatch::stop()
{
	endTime = clock();
}

unsigned long long StopWatch::getElapsedTime()
{
	return endTime - startTime;
}
