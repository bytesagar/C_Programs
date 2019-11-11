/*
            This program Checks either the two input taken are equal or not
*/

#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the first Number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    if (num1 == num2)
    {
        printf("Numbers are equal\n\n");
    }
    else
    {
        printf("Numbers are not equal");
    }
}
