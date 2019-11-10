#include <stdio.h>
int main()
{
        int choice;
        printf("What do you want to do?\n");
        printf("1. Add Contacts\n");
        printf("2. Edit Existing Contacts\n");
        printf("3. call Contacts\n");
        printf("4. Text Contacts\n");
        printf("5. Exit\n");
        do
        {
            printf("Enter your Choice: ");
            scanf("%d", &choice);
            switch (choice)
            {
            case (1):
                printf("To add you will need contacts\n");
                break;
            case (2):
                printf("Enter the name of contact you wish to change: \n");
                break;
            case (3):
                printf("Which contact do you wish to call: \n");
                break;
            case (4):
                printf("Which contact do you wish to text: \n");
                break;
            case (5):
                exit(1);
                break;
            default:
                printf("Enter the valid input only.");
                break;
            }
        } while ((choice <1 || (choice > 5)));
        return 0;
}
