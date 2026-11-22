#include<stdio.h>
#include<stdlib.h>


int main()
{
    int *ptr = NULL;
    int iSize =0;

    printf("Enter the elements you want : \n");
    scanf("%d",&iSize);

    //Step1 : Allocate the memory
    ptr = (int *)malloc(sizeof(int) * iSize);

    //Step2 ; USe the memory

    //Step3 : Free the memory
    free(ptr);
    
    return EXIT_SUCCESS;
} 