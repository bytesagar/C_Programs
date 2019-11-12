/*
   C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.
*/

#include <stdio.h>
int main()
{
    int coX, coY;
    printf("Enter the two cordinates x and y: ");
    scanf("%d%d",&coX,&coY);
    if (coX > 0 && coY > 0)
    {
        printf("The cordinate (%d,%d) lies in first quadrant.\n",coX,coY);
    }
    else if(coX < 0 && coY > 0)
    {
         printf("The cordinate (%d,%d) lies in second quadrant.\n",coX,coY);
    }
    else if(coX < 0 && coY < 0)

    {
         printf("The cordinate (%d,%d) lies in third quadrant.\n",coX,coY);
    }
    else{
         printf("The cordinate (%d,%d) lies in fourth quadrant.\n",coX,coY);
    }
}
