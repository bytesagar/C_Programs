/*
        Checks for the greatest number among three numbers.
*/

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a > b && a > c)
    {
        printf("a = %d  b = %d  c = %d\n",a,b,c);
        printf("A is greater\n");
    }
    else if(b > c && b > a)
    {
         printf("a = %d  b = %d  c = %d\n",a,b,c);
        printf("B is greater\n");
    }
    else{
        printf("a = %d  b = %d  c = %d\n",a,b,c);
        printf("C is greater\n");
    }
}
