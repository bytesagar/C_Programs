#include <stdio.h>
#define PI 3.14
int main()
{
    float radius, area;
    printf("Enter the radius of circle: ");
    scanf("%f", &radius);
    area = PI  * radius * radius;    //Area of circle
    printf("The area of circle is %.2f.",area);
}
