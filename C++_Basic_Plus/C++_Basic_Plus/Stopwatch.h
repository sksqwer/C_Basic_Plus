#pragma once
#ifndef STOPWATCH_H
#define STOPWATCH_H

class StopWatch
{
private:
	unsigned long long startTime;
	unsigned long long endTime;
public:
	StopWatch();
	unsigned long long getstarttime();
	unsigned long long getendtime();
	void start();
	void stop();
	unsigned long long getElapsedTime();
};

#endif // !STOPWATCH_H
