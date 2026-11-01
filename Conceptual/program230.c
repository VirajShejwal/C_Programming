#include<stdio.h>
#include<stdlib.h>


int main()
{  
   char Arr[100];

   Arr[0] = 'G';             //member by member initialisation list
   Arr[1] = 'A';
   Arr[2] = 'N';
   Arr[3] = 'E';
   Arr[4] = 'S';
   Arr[5] = 'H';
   Arr[6] = '\0';

   printf("%s\n",Arr);

   printf("Size of array is : %d\n",sizeof(Arr));
    
    return EXIT_SUCCESS;
}