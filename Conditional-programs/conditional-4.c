/*
     If m is greater 0 ,prints n = 1.
     if m == 0, prints n = 0.
     if m < 0, prints n = -1.
*/

#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the value of m: ");
    scanf("%d",&m);

    if(m != 0)
    {
        if (m > 0)
        {
            n=1;
        }
        else
        {
            n= -1;
        }

    }
    else{
        n = 0;
    }
    printf("The value of m = %d \n",m);
    printf("THe value of n = %d \n",n);
}
