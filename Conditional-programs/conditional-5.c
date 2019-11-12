#include <stdio.h>
int main()
{
    int height;
    printf("Enter the height (in centimeters): ");
    scanf("%d",&height);
    if (height < 150)
    {
        printf("The person is Dwarf.\n");
    }
    else if((height >= 150)&& (height < 165))
    {
        printf("The person is averaged height \n");
    }
    else if(height >= 165)
    {
        printf("The person is tall \n");
    }
    else{
        printf("Abnornal height.\n");
    }
}
