/*
            This program checks either the number is odd or even
*/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number to check: ");
    scanf("%d",&num);
    if (num % 2 == 0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
}
