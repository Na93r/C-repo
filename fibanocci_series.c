#include <stdio.h>
// recursive Fibonacci function

unsigned long long int fibonacci(unsigned int); // function prototype

int main(void) {
	unsigned int number; // number input by user
	
	// obtain integer from user
	printf_s("%s", "Enter an Integer: ");
	scanf_s("%u", &number);

	//calculate Fibonacci value for number input by user
	unsigned long long int result = fibonacci(number);

	//display result
	printf_s("Fibonacci(%u) = %llu\n", number, result);

}

//Recursive definition of function Fibonacci
unsigned long long int fibonacci(unsigned int n) {
	
	// base case
	if (0 == n || 1 == n) {
		return n;
	}
	else { // recursive step
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
