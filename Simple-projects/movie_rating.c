/*
  Purpose: This program rates the movies as information provided by the user;
  Author: Sagar Karki;
*/


#include <stdio.h>
#include <string.h>
int main()
{
    int ctr, numMovie, rating, favRating, leastRating;
    char movieName[40], favourite[40], least[40];

    //inittialize the fav movie and laeast fav rating value
    favRating = 0;
    leastRating = 10;
    do
    {
        printf("How many movies have you watched: ");
        scanf("%d",&numMovie);

        // If the user enters negative or 0 it will remid them
        //To enter the valid input
        if (numMovie < 1)
        {
            printf("No movies watched! Go watch Some\n");
        }
        }while(numMovie < 1);
        for (ctr=1; ctr<=numMovie; ctr++)
        {
            printf("What was the name of movie: ");
            scanf("%s",movieName);
            printf("Rate the movie from 1 to 10: ");
            scanf("%d", &rating);

            if (rating > favRating)
            {
                strcpy(favourite, movieName);
                favRating = rating;
            }
            if (rating < leastRating)
            {
                strcpy(least, movieName);
                leastRating = rating;
            }
        }
        printf("\nYour favourite movie was %s. \n", favourite);
        printf("\nYour least-Favourite Movie wa %s. \n", least);
}
