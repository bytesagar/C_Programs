/*
    This is a number guessing game which generates a random number between 0 to 20 and
    asks user to enter their guess.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber = 0;
    int guess = 0;
    int maxNumberOfGuess;
    time_t t;

    //Initialization of random number generator
    srand((unsigned) time(&t));

    //get the random number
    randomNumber = rand() % 21;    //Generates random number from 0 to 20

    printf("This is a Number guessing game.");
    printf("\nYou should guess the number between 0 to 20.\n");
    for (maxNumberOfGuess = 5; maxNumberOfGuess > 0; --maxNumberOfGuess)
    {
        printf("\nYou have %d tr%s left.", maxNumberOfGuess, maxNumberOfGuess == 1 ? "y" : "ies");
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        if(guess == randomNumber)
        {
            printf("\n************Congratulation. You guessed it!***************\n");
            break;
        }
        else if(guess < 0 || guess > 20) //Checking the invalid guess
            printf("The number should be between 0 and 20.\n");
        else if(randomNumber > guess)
            printf("Sorry, %d is wrong. My number is greater than that.\n", guess);
        else if(randomNumber < guess)
            printf("Sorry, %d is wrong. My number is less than that.\n", guess);
    }
    printf("\nYou have had 5 tries and failed. The number is %d.\n", randomNumber);
    return 0;
}
