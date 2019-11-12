#include <stdio.h>
int main()
{
    float   celsius, fahrenheit;

    //Reads the temperature in Fahrenheit
    printf("Enter the temperature(F): ");
    scanf("%f",&fahrenheit);

    //Fahrenheit to celsius conversion formula.
    celsius = (fahrenheit - 32)* 5 / 9;

    //Prints out the converted temperature
    printf("%.2f Fahreinheit = %.2f Celsius",fahrenheit,celsius);
}
