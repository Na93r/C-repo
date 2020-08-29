#include <stdio.h>

void useLocal(void); // function prototype
void useStaticLocal(void); // function prototype
void useGlobal(void); // function prototype
int x = 1; // global variable 

int main() {
	int x = 5;
	printf_s("Local x is outer scope of main is %d\n", x);
	{// start new scope
		int x = 7; // local variable to new scope
		printf_s("local x in inner scope of main is %d\n", x);
	}// end new scope

	printf_s("local x in outer scope of main is %d\n", x);

	useLocal(); // useLocal has automatic local x
	useStaticLocal(); // useStaticLocal has static local x
	useGlobal(); // useGlobal uses global x
	useLocal(); // useLocal reinitializes automatic local x
	useStaticLocal(); // static local x retains its prior value
	useGlobal(); // global also retain its value

	printf_s("\nlocal x in main is %d\n", x);

}

// useLocal reinitializes local variable x during each call
void useLocal(void) {
	int x = 25; // initialized each time useLocal is called

	printf_s("\nlocal x in useLocal is %d after entering useLocal\n", x);
	++x;
	printf_s("\nlocal x in useLocal is %d after exiting useLocal\n", x);
}

// useStaticLocal initializes static local variable x only the first time
// the function is called; value of x is saved between calls to this function
void useStaticLocal(void) {
	// initialized once
	static int x = 50;

	printf_s("\nlocal static x is %d on entering useStaticLocal\n", x);
	++x;
	printf_s("\nlocal x in static is %d after exiting useStaticLocal\n", x);
}

// function useGLobal modifies global variable x during each call
void useGlobal(void) {
	printf_s("\nglobal x is %d on entering useGlobal\n", x);
	x *= 10;
	printf_s("\nglobal x is %d after exiting useGlobal\n", x);
}
