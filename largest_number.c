#include "stdio.h"

int main(void)
{
	unsigned int counter;
	int num = 0, largest = 0;
	// initialize phase
	counter = 1;
	//processing phase
	while (counter <= 10) { //loop 10 times
		printf_s("Enter a number: "); //prompt for input
		scanf_s("%d", &num); //read number from user
		// compare the numbers and added to largest
		num > largest ? printf_s("largest number is: %d\n", num), largest = num : printf_s("largest number is: %d\n", largest);
		counter++; // increment counter
	}
}
