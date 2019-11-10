/*
        Purpose: Prints the location of the user input using the gets() and puts();
        Author: sagar Karki

*/
#include <stdio.h>
#include <string.h>  //contains strcat
int main()
{
    char city[15];
    char st[3];
    char fullLocation[18] ="";
    puts("What town do you live in? "); //prints in the screen
    gets(city); //gets the input from keyboard

    puts("What state do you live in(Two letter abbreviation: ");
    gets(st);

    //Concatenate the strings
    strcat(fullLocation,city);
    strcat(fullLocation, ", "); //Adds a conna and space between city and state abbreviation
    strcat(fullLocation, st);
    puts("\nYou live in\n");
    puts(fullLocation);
    return 0;
}
