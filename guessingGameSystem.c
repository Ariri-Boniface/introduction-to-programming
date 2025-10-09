/*
Name: ARIRI BONIFACE
Reg No: PA106/G/28780/25
Description: guessing game sysstem
*/
#include <stdio.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;
    srand(time(0));
    secretNumber = (rand() % 20) + 1;
     printf("Guess the number (between 1 and 20):\n");
	do {
	        printf("Enter guess: ");
	        scanf("%d", &guess);
	        attempts++;
	
	        if (guess > secretNumber) {
	            printf("Too high!\n");
	        } else if (guess < secretNumber) {
	            printf("Too low!\n");
	        } else {
	            printf("You guessed it in %d attempts.\n", attempts);
	        }
	    } while (guess != secretNumber);
	
	    return 0;
	}

