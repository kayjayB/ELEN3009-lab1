#ifndef STOPWATCH_H
#define STOPWATCH_H

#include <ctime>

class StopWatch {
public:
 
StopWatch(); // StopWatch constructor
void startTimer(); // function to start the timer
void stopTimer(); // function to end the timer and output the elapsed time

private:

clock_t time;
double initialTime; // variable to store the time elapsed at the start of the block of code
double finalTime; // variable to store the time elapsed at the end of the block of code
double executionTime; // variable to store the execution time

double getProcessTime(); // returns the amount of time in seconds that has passed since 
										// the process (i.e. your program) started executing
} ;
#endif
