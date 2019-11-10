/*
        This program simply finds the sum of stored elements in the array.
*/

#include <stdio.h>
int main()
{
    int i, j, value[100];
    int sum = 0;
    printf("\n\n*********Find sum of all elements in the array**********\n\n");
    printf("Enter the number of elements in array: ");
    scanf("%d",&j);
    printf("Enter %d elements in the array.",j);
    for (i=0; i<j; i++)
    {
        printf("\nElement - %d : ",i);
        scanf("%d",&value[i]);
    }

    for (i=0; i<j; i++)
    {
        sum+=value[i];
    }
    printf("\nSum of all elements in the array is: %d",sum);
}
