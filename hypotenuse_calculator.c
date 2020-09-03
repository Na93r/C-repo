#include<stdio.h>
#include <math.h>
double hypotenuse(double, double); // function prototye

int main() {
	double a = 0, b = 0;
	printf_s("%s", "Enter sides of the triangle:\n"); // prompt user for input
	scanf_s("%lf%lf", &a, &b);
	printf_s("The hypotenuse is: %.2lf", hypotenuse(a, b));
}

double hypotenuse(double a, double b) {
	double c; // hypotenuse declaration
	c = sqrt(pow(a, 2) + pow(b, 2)); // hypotenuse formula
}
