#include <stdio.h>
// A program that take a country population and calculate it's growth rate
// I choose Saudi Arabia as an example
// feel free to add or change something


int main(void)
{	
	// initialize phase
	int saudi_popluation = 34000000;
	float growth_rate = 0.0159;
	
  // calculation phase
	float pop_growth = saudi_popluation * growth_rate;
	float total_1yr = pop_growth + saudi_popluation;
	float total_2yr = 2*pop_growth + saudi_popluation;
	float total_3yr = 3* pop_growth + saudi_popluation;
  
  // printing the output phase
	printf_s("Estimated growth is: %.2f\n", pop_growth);
	printf_s("Estimated total after one year is: %.0f\n", total_1yr);
	printf_s("Estimated total after two years is: %.0f\n", total_2yr);
	printf_s("Estimated total after three years is: %.0f\n", total_3yr);
}
