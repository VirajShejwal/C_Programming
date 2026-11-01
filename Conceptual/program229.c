#include<stdio.h>
#include<stdlib.h>

int main()
{  
   char Arr[100]= {'G','A','N','E','S','H','\0','P','u','n','e'};          //member initialisation list

   printf("%s\n",Arr);

   printf("Size of array is : %d\n",sizeof(Arr));
    
    return EXIT_SUCCESS;
}