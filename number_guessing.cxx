
/*
Name: Derrick Mathenge
Reg no: CT100/26181/25
Description: Number Guessing Game
*/

#include <stdio.h>
#include <stdlib.h>  
#include <time.h>     

int main() {
    int number, guess;

    
    srand(time(0));

    
    number = (rand() % 20) + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess a number between 1 and 20.\n");

    
    while (1) {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        if (guess > number) {
            printf("Too high! Try again.\n");
        } 
        else if (guess < number) {
            printf("Too low! Try again.\n");
        } 
        else {
            printf(" Congratulations! You guessed the number %d correctly!\n", number);
            break;  
        }
    }

    return 0;
}
	
