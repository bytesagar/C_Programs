/*
        Checks either you are eligible to vote for a candidate in Nepal.
*/

#include <stdio.h>
int main()
{
    int AGE;
    printf("Enter your age :");
    scanf("%d",&AGE);

        if (AGE >= 18)
        {
            printf("Congratulation, you are eligible to vote for a candidate");
        }

        else
        {
            printf("Sorry, You are not eligible to vote for now");
        }



}
