#include <stdio.h>
// a program that return all multiples of 3 to 100

int main(void)
{
	for (int x = 3; x <= 100 && x % 3 == 0; x+=3) {
		printf_s("%d\n", x);
	}
}
