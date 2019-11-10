/*
    This is a simple calculator which performs basic mathematics operations.
*/

#include <stdio.h>
int main()
{
    float num1, num2;    //takes input in float
    int choice;
    printf("What do you want to do?\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Division\n");
    printf("4. multiplication\n");
    printf("5. Exit\n");
    while (choice > 0)
    {
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case (1):
            printf("Enter the first number: ");
            scanf("%f", &num1);
            printf("Enter the second number: ");
            scanf("%f", &num2);
            printf("The sum of two numbers is %.2f", (num1+num2));
            break;

            case(2):
            printf("Enter the first number: ");
            scanf("%f", &num1);
            printf("Enter the second number: ");
            scanf("%f", &num2);
            printf("The difference of two numbers is %.2f", (num1-num2));
            break;

            case(3):
            printf("Enter the first number: ");
            scanf("%f", &num1);
            printf("Enter the second number: ");
            scanf("%f", &num2);
            printf("The division of two numbers is %.2f", (num1/num2));
            break;

            case(4):
            printf("Enter the first number: ");
            scanf("%f", &num1);
            printf("Enter the second number: ");
            scanf("%f", &num2);
            printf("The product of two numbers is %.2f", (num1*num2));
            break;

            case(5):
                exit(1);

            default:
                printf("Please Enter the valid number.");
                break;
        }

    }

}
