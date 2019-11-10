/*
    Purpose: Just for learning purpose.

*/
#include <stdio.h>
#include <string.h>
#define TOMATO 120.0
#define POTATO 80.0
#define ONION 90.0
int main()
{
    int choice;
    float quantity;
    printf("What do you want to do?\n");
    printf("1. Buy Garments.\n");
    printf("2. Buy Vegetables.\n");
    printf("3. Buy Fruits.\n");
    printf("4. Exit\n");
    do
    {
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case (1):
            printf("1. Cloths\n");
            printf("2. Bed Sheets\n");
            printf("3. Exit\n");
            do
            {
                printf("Enter your choice: ");
                scanf("%d", &choice);
                switch (choice)
                {
                case (1):
                    printf("You succesfully bought clothes\n");
                    printf("Buy some vegetables.\n");
                    break;
                case (2):
                    printf("You bought bedsheets\n");
                    break;
                case (3):
                    exit(1);
                default:
                    printf("Please Enter a valid input\n");
                    break;
                }
            }while ((choice < 1 )|| (choice >3));
        case (2):
            printf("Which Vegetable do you want to Buy?\n");
            printf("1. Tomato\n");
            printf("2. Potato\n");
            printf("3. Onion\n");
            printf("4. Exit\n");
            while (1)
            {
                printf("Enter your choice: ");
                scanf("%d", &choice);
                switch (choice)
                {
                case (1):
                    printf("Enter the quantity(kg): ");
                    scanf("%f",&quantity);
                    printf("Total price for the quantity you bought is: %.2f\n",(TOMATO * quantity));
                    break;
                case (2):
                    printf("Enter the quantity(kg): ");
                    scanf("%f",&quantity);
                    printf("Total price for the quantity you bought is: %.2f/n",(POTATO * quantity));
                    break;
                case (3):
                    printf("Enter the quantity(kg): ");
                    scanf("%f",&quantity);
                    printf("Total price for the quantity you bought is: %.2f/n",(ONION * quantity));
                    break;
                case (4):
                    exit(1);
                default:
                    printf("Please enter the valid input");
                    break;
                }
                case (3):
                    printf("Sorry, We are out of stock.");
                    break;
                case (4):
                    exit(1);
                default:
                    printf("Invalid input. Please provide valid input.");
                    break;
            }
        }
    }while ((choice < 1 || (choice > 5)));
    return 0;

}
