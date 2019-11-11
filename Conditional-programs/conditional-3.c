/*
        This program checks whether the num is positive or negative.
*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if (num < 0)
    {
        printf("The number is negative");
    }
    else
    {
        printf("The number is positive");
    }
}
