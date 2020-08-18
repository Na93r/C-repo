#include <stdio.h>
// a program that convert dog age into human years

int main() {
  // initializing phase
  int dog_age;
  //unsigned char dog_name;
  // for the dog's first two years
  int early_years;
  // for the dog's followings years
  int later_years;
  // for your dog’s total human years
  int human_years;

//prompt user to enter dog's name
 // printf("Enter your dog's name\n");
 // std::cin >> dog_name;
// prompt user to enter dog's age
printf("%s","Enter your dog's age\n");
  scanf("%d",&dog_age);

// The first two years of a dog’s life count as 21 human years.
  early_years = 21;

  // Each following year counts as 4 human years.
  later_years = (dog_age-2)*4;
  
  //the dog in human years
  human_years = early_years + later_years;
  printf("My name is fluffy! ruff ruff, i'm %d years old in human years.\n", dog_age);
  
}
