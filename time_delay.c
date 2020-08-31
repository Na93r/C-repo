// C function show how to use time delay 
#include <stdio.h>
// use time.h library
#include <time.h>


void delay(int); // function prototype

int main(void) {

	int i;
	for (i = 0; i < 10; i++) {
		delay(1); // delay of one second
		printf_s("%d second have passed\n", i + 1);
	}
	
}

void delay(int number_of_seconds){
	// converting time into milliseconds
	int milli_second = 1000 * number_of_seconds;

	// storing starting time
	clock_t start_time = clock();
	
	// looping till required time is not achieved 
	while (clock() < start_time + milli_second);
}
