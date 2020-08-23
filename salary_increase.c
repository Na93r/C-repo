#include <stdio.h>
// a program that will calculate salary increase for ten years

int main(void)
{
	float salary = 0; // initializing phase
	printf_s("%s","Enter your salary: "); //prompt the user for input
	scanf_s("%f",&salary);
	
	for (unsigned int year = 1; year <= 10; year++) { // reaping for ten years
		salary += salary * 0.05;
		printf_s("After %2u year Salary will be: %5.2f\n", year, salary);
	}
}
