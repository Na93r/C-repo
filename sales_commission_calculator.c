#include <stdio.h>

int main(void) {
	// initializing variable and definitions
	float sales = 0;
	double salary = 200;
	float bonus = 0.09;

	while (sales != -1) {
		printf_s("%s", "Enter sales in dollar (-1 to end): ");// prompt user for input
		scanf_s("%f", &sales); // get the input from the user
		if (sales == -1) { //break the loop
			continue;
		}
		else {
			printf_s("Salary is: %.2f\n", (salary +(bonus*sales))); // 9% bonus to salary
		}
	}
}
