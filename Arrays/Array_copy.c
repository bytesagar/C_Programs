#include <stdio.h>
int main()
{
    int arr1[100], arr2[100];
    int i, j;
    printf("\n\nCopy elements of one array to another array\n\n");
    printf("Enter the number of elements: ");
    scanf("%d",&j);
    printf("enter %d elements in the array:",j);
    for (i=0; i<j; i++)
    {
        printf("\nElement - %d: ",i);
        scanf("%d",&arr1[i]);
    }
    //To copy the element of arr1 to arr2
    for (i=0; i<j; i++)
    {
        arr2[i] = arr1[i];
    }
    printf("\nThe elements stored in the arr1 are:\n");
    for (i=0; i<j; i++)
    {
        printf("%d\t",arr1[i]);
    }
    printf("\nThe elements stored in the arr2 are:\n\n");
    for (i=0; i<j; i++)
    {
        printf("%d\t",arr2[i]);
    }
    printf("\n\n\n");
}
