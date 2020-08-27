#include <stdio.h>
#include <time.h>
#include <stdlib.h>

enum Status { CONTINUE, WON, LOST};
	int rollDice(void);
int main(void)
{	
	// randomize random number generator using current time
	srand(time(NULL));

	int myPoint; // player must make this point to win
	enum Status gameStatus; // can contain CONTINUE, WON, or LOST
	int sum = rollDice(); // first roll of dice

	switch (sum) {
		//win on first roll
	case 7:
	case 11:
		gameStatus = WON;
		break;

	case 2:
	case 3:
	case 12:
		gameStatus = LOST;
		break;

		//remember point
	default:
		gameStatus = CONTINUE; // player should keep rolling
		myPoint = sum;
		printf_s("Point is %d\n", myPoint);
		//break; // optional 
	}
		while (CONTINUE == gameStatus) {
			sum = rollDice(); // roll dice again
			// determine game status
			if (sum == myPoint) {
				gameStatus = WON;
			}
			else {
				if (7 == sum) {
					gameStatus = LOST;
				}
			}
		}
		// display won or lost message
		if (WON == gameStatus) {
			puts("Player wins");
		}
		else {
			puts("Player Loses");
		}
	}
	

int rollDice(void) {
	int die1 = 1 + (rand() % 6); // pick random die1 value
	int die2 = 1 + (rand() % 6); // pick random die2 value
	// display result of this roll
	printf_s("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
	return die1 + die2;
}
