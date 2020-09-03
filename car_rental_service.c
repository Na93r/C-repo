// Car Rental Service Program
#include <stdio.h>

float calculateCharge(unsigned int);// function prototype

// minimum 25.00$ fee to rent a car for 8 hours, maximum 50$ per day
// additional 5$ per hour after the first 8 hours
// additional 0.50$ per hour as service tax
int main() {
	unsigned int hour = 0;
	printf_s("%s", "Enter number of hours: "); // prompt user for input
	scanf_s("%d", &hour);
	printf_s("Total charge is: $%.2f", calculateCharge(hour)); // print the function call
}

float calculateCharge(unsigned int hour) {
	float charge = 0;

	if (hour <= 8) {
		charge = 25; // minimum charge
	}
	else if (hour > 8) {
		// minimum charge + additional charge per hour + tax service
		charge = 25 + ((hour-8) * 5) + (hour * 0.5);
	}
}
