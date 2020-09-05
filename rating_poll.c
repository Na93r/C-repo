// this program solve and analayze this porblem 

/*
forty student were asked to rate the quality of the food in the student cafeteria on a scale of 1 to 10 (1 means awful and 10 means exellent).
place the 40 responses in an integer array and summarize the result of the poll.
*/
#include<stdio.h>
#define RESPONSES_SIZE 40
#define FREQUENCY_SIZE 11

// function main begins program execution
int main() {
	// initialize frequency counters to 0
	int frequency[FREQUENCY_SIZE] = {0};

	// place the survey responses in the responses array
	int responses[RESPONSES_SIZE] = { 1,2,6,4,8,5,9,7,8,10,1,6,3,8,6,10,3,8,2,7,6,5,7,6,8,6,7,5,6,6,5,6,7,5,6,4,8,6,8,10 };
	// for each answer, select value of an element of array responses
	// and use that value as an index in array frequency to 
	// determine element to increment
	for (size_t answer = 0; answer < RESPONSES_SIZE; ++answer)
	{
		++frequency[responses[answer]];
	}

	// display result
	printf_s("%s%17s\n", "Rating", "Frequency");

	// output the frequencies in a tabular format
	for (size_t rating = 1; rating < FREQUENCY_SIZE; ++rating)
	{
		printf_s("%6llu%17d\n", rating, frequency[rating]);
	}
}
