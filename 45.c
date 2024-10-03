#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int random_number;
	srand(time(NULL));
	random_number = (rand() % 100) + 1;
	printf("Enter a guess for the number between 1 and 100\n");
	int user_guess, tries = 0;
	do
    {
	   scanf("%d", &user_guess);
	   if(user_guess > random_number)
       {
	       printf("The number you entered is greater");
	       tries++;
	   }
	   else if(user_guess < random_number)
       {
	       printf("The number you entered is smaller");
	       tries++;
	   }
	   else
       {
	       printf("Correct Guess, You Won in %d tries!", tries);
	   }
	}while(user_guess != random_number);
	
	return 0;
}
