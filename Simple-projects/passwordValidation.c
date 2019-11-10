/*
  This program checks whether the passwerd has upper, lower and digits.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int i;
    int hasUpper, hasLower, hasDigit;
    char username[25], password[25];
    hasUpper = hasLower = hasDigit =0;
    printf("what is your username: ");
    scanf("%s", username);                  //Takes input as string.

    printf("What is your password: ");
    scanf("%s",password);                   //Tskes input as string

    for (i=0; i<=strlen(password);i++)
    {
        if (isdigit(password[i])){hasDigit=1;continue;}
        if (isupper(password[i])){hasUpper=1; continue;}
        if (islower(password[i])){hasLower=1;}

    }
    if (hasDigit && hasUpper && hasLower)    //Checks for the true condition
            {
                printf("excellent work %s. Your password has upper,lower character and digit too.\n",username);
            }
            else
            {
                printf("You should consider a new password %s, containing upper,lower and digit.\n",username);
            }
    return 0;
}
