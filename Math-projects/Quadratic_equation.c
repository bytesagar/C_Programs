/*
    Finding two roots of a quadratic equation.

*/

#include <stdio.h>
#include <math.h>
int main()
{
    int a, b , c, d;
    float x1, x2;
    printf("Enter a, b, c: ");
    scanf("%d%d%d",&a,&b,&c);
    d = (b*b)-4*a*c;
    if (d == 0)
    {
        printf("Roots are equal.\n");
        x1 = -b/(2.0*a);
        x2 = x1;
        printf("The first root Root1 = %f\n",x1);
        printf("The second root Root2 = %f\n",x2);
    }
    else if(d > 0)
    {
        printf("Both roots are real and different\n");
        x1 = (-b+sqrt(d))/(2*a);
        x2 = (-b-sqrt(d))/(2*a);
        printf("The first root Root1 = %f\n",x1);
        printf("The second root Root2 = %f\n",x2);
    }
    else{
        printf("The roots are imaginary.\nNo solution");
    }
}
