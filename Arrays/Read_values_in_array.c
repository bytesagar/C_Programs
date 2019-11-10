/*
            This program simply adds the values to the array and prints them in the reverse order.

*/

#include <stdio.h>
int main()
{
    int i, j, k[100];
    printf("\n\nTakes elements in array and displays in reverse order.\n\n");
    printf("------------------------------------------------------------\n\n");
    printf("Enter the number of elements to store in array: ");
    scanf("%d",&j);
    printf("Enter %d elements in the array.\n",j);
    for (i=0; i<j; i++)
    {
        printf("Element - %d : ",i);
        scanf("%d", &k[i]);
    }
    printf("The values stored in the array are: \n");
    for (i=0; i<j; i++)
    {
        printf("%5d\t",k[i]);
    }
    printf("\nThe values stored in the array in the reverse order are: \n");
    for (i=j-1; i>=0; i--)
    {
        printf("%5d\t",k[i]);
    }

}
