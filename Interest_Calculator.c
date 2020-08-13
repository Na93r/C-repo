#include <stdio.h>

int main(void) {
	// initializing variable and definitions
	float rate = 0, interest = 0, principal = 0, days = 1;
	while (principal != -1) {
		printf_s("%s", "\nEnter Loan Principal in dollar (-1 to end): ");// prompt user for input
		scanf_s("%f", &principal); // get the input from the user
		printf_s("%s", "Enter interest Rate: ");
		scanf_s("%f", &rate);
		printf_s("%s", "Enter term of the loan in days: ");
		scanf_s("%f", &days);

		interest = principal * rate * (days / 365);

		if (principal == -1) { //break the loop
			continue;
		}
		else {
			printf_s("The interest charge is $ %.2f\n", interest);
		}
	}
}
