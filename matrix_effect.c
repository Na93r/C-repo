#include <stdio.h>
// warning: this program cause infinite loop
int main(void) {
	int x , i, j;
	//prompt user for input
	printf_s("%s", "Enter an integer in the range 1-20: ");
	scanf_s("%d", &x); // read values for x
	for (i = 1; i <= x; x++) {// count from 1 to x
		for (j = 1; j <= x; j++) { // count from 1 to x
			if (j == i)
				printf_s("%c", '@'); // output @
			else
				printf_s("  ");
			} // end inner for
	} // end outer for
} // end main
