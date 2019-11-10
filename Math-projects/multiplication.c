/*
        This program simply takes input from the user and displays the product table upto the user entered number.

*/

#include<stdio.h>
int main()
{
	int n,i,j;      //Declaring variables
	printf("Enter the no: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)     //Loops to user entered number
	{
	for(j=1;j<=10;j++)    //Loop for the multiplication table.
	{
        printf("%d X %d = %d\n",i,j,i*j);
	}
        printf("\n\n\n");
}

}
