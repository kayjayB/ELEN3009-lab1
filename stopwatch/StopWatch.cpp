#include "StopWatch.h"
#include <ctime>
#include <iostream>
using namespace std;

StopWatch::StopWatch() // StopWatch constructor
{
	initialTime=0;
	finalTime=0;
	executionTime=0;
}

// returns the amount of time in seconds that has passed since the process (i.e. your program) started executing 
double StopWatch::getProcessTime()
{
	time = clock();
	return static_cast<double>(time)/CLOCKS_PER_SEC;
}

void StopWatch::startTimer()// starts the timer
{
	initialTime= getProcessTime(); // stores the time at the start of the section of code
}

void StopWatch::stopTimer() // ends the timer and outputs the elapsed time
{
	finalTime=getProcessTime(); // Stores the time after the block of code has executed
	executionTime = finalTime - initialTime; // Calcuates the time taken for the block to execute
	cout << "Time taken to execute the block of code was: " << executionTime << endl;
}

int main()
{
	StopWatch myStopWatch; // Create new StopWatch object
	
	myStopWatch.startTimer(); // Start the timer
	
	// Block of code to time
	for (int i=0; i<1000; i++)
	{
		cout << i << endl;
	}
	
	myStopWatch.stopTimer();// End of timer and output the elapsed time
	
	return 0;
}