#include <stdio.h>
int main()
{
    //Returns the size.
   printf("Variables of type int occupy %u\n",sizeof(int));
    printf("Variables of type char occupy %u\n",sizeof(char));
     printf("Variables of type long occupy %u\n",sizeof(long));
      printf("Variables of type long long occupy %u\n",sizeof(long long));
       printf("Variables of type double occupy %u\n",sizeof(double));
       printf("Variables of type long double occupy %u\n",sizeof(long double));
       printf("Variables of type float occupy %u",sizeof(float));
}
