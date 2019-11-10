/*
 Purpose: This program calculates perimeter and area of rectangle.
 author: Sagar Karki.

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Defining Variables
    double height, width, perimeter, area;
    height = 5.5;
    width = 2.5;
    perimeter = 0.0;
    area = 0.0;

    //Calculatitng Perimeter amd area of rectangle
    perimeter = 2.0 * (height + width);
    area = height * width;
    printf("Height is: %f\nWidth is: %f\nPerimeter is: %f\nArea is: %f", height, width, perimeter, area);
}
