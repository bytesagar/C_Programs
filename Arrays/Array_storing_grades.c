#include <stdio.h>

int main()
{
    int grades[10];
    int count = 10;
    long sum = 0;
    float average = 0.0f;

    printf("\nEnter the 10 grades:\n");

    //Reads the 10 numbers to be averaged
    for (int i = 0; i< count; ++i)
    {
        printf("%u> ", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

    average = (float)sum/count;
    printf("\naverage of the ten grades entered is %.2f\n", average);
}
