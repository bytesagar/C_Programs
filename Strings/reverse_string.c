//This program reverse the letter in the string.

#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char msg[25];
    printf("Type upto 0 to 25 characters and press enter: ");
    for (i=0; i<25; i++)
    {
        msg[i] = getchar();
        if (msg[i]=='\n')
        {
            i--;
            break;
        }
    }
    putchar('\n');
     for (;i>=0;i--) //This makes the string count from last
        //it reverses the string
    {
        putchar(msg[i]);
    }
    putchar('\n');

    return 0;
}
