/*
 * C program to print number of days in a month using switch case
 */
#include <stdio.h>
int main()
{
    int month;
    printf("Enter the month (1-12): ");
    scanf("%d",&month);
    switch(month)
    {
    case 1:
        printf("31 Days");
        break;
    case 2:
        printf("28/29 Days");
        break;
    case 3:
        printf("31 Days");
        break;
    case 4:
        printf("30 Days");
        break;
    case 5:
        printf("31 Days");
        break;
    case 6:
        printf("30 Days");
        break;
    case 7:
        printf("31 Days");
        break;
    case 8:
        printf("31 Days");
        break;
    case 9:
        printf("30 Days");
        break;
    case 10:
        printf("31 Days");
        break;
    case 11:
        printf("30 Days");
        break;
    case 12:
        printf("31 Days");
        break;
    default:
        printf("Enter the valid num between 1 - 12");



    }
}
