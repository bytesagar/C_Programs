/*
        Purpose: This program checks whetheer the number is even or odd;
        Author: Sagar karki
*/

#include <stdio.h>
int main()
{
    int test_num,remainder;
    printf("Enter the number to be tested: ");
    scanf("%d",&test_num);
    remainder = test_num % 2;
    if (remainder == 0)
    {
        printf("The number is Even.\n");
    }
    else
    {
        printf("The number is Odd.\n");
    }

}

