#include "stdio.h"

int main(void)
{	// initialize phase
	unsigned int counter = 1;
	int num = 0, largest1 = 0, largest2 = 0;

	//processing phase
	while (counter <= 10) { //loop 10 times
		printf_s("Enter a number: "); //prompt for input
		scanf_s("%d", &num); //read number from user
		// compare the numbers and added to largest
		if (num > largest1 && num > largest2) { // compare the input number with the largest number 
			largest1= num; // save the largest number to num variable 
		}
		else if (num < largest1 && num > largest2) { // if the first condition is false this comparison will run
			largest2 = num; // save the 2nd largest number to num variable
		}
		printf_s(" first largest number is: %d\n", largest1);
		printf_s(" second largest number is: %d\n", largest2);
		counter++; // increment counter
	}
}
