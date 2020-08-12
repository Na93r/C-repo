#include <stdio.h>

int main(void) {
	// initializing variable and definitions 
	int accountNum = 0 , mortgageAmnt = 0, mortgageTerm = 0;
	float interestRate = 0;
	// prompt user for input
		printf_s("%s", "Enter Account Number (-1 to quit): ");
		scanf_s("%d", &accountNum); 

	while (accountNum != -1) {
		printf_s("%s","Enter Mortgage Amount: ");
		scanf_s("%d", &mortgageAmnt); // prompt user for input
		printf_s("%s", "Enter Mortgage Term (in years): ");
		scanf_s("%d", &mortgageTerm); // prompt user for input
		printf_s("%s", "Enter Interest Rate: ");
		scanf_s("%f", &interestRate); // prompt user for input
		mortgageAmnt = mortgageAmnt +(mortgageAmnt * interestRate * mortgageTerm);
		float totalAmnt = mortgageAmnt/(mortgageTerm*12);
		printf_s("The Monthly Payable interest $ %.2f\n", totalAmnt);
		printf_s("%s", "Enter Account Number (-1 to quit): ");
		scanf_s("%d", &accountNum); // if account is -1 loop will terminate 
	}
	
}
