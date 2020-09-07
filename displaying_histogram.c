// Grapghing array element values with histograms
#include<stdio.h>
#define SIZE 5

// function main begins program execution
int main() {
	
	// use initializer list to initialize array n
	int n[SIZE] = { 19,3,15,7,11 };

	printf_s("%s%13s%17s\n", "Element", "Value", "Histogram");

	// for each element of array n, output a bar of the histogram
	for (size_t i = 0; i < SIZE; ++i) {
		printf_s("%7llu%13d        ", i, n[i]);

		for (int j = 1; j <= n[i]; ++j) { // print one bar
			printf_s("%c", '*');
		}
		puts(""); // end a histogram bar with a newline
	}
}
