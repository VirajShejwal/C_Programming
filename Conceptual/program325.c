#include<stdio.h>
#include<stdlib.h>


int main()
{
    int *ptr = NULL;
    int iSize =0,iCnt =0;

    printf("Enter the elements you want : \n");
    scanf("%d",&iSize);

    //Step1 : Allocate the memory
    ptr = (int *)malloc(sizeof(int) * iSize);

    //Step2 ; USe the memory
    printf("Enter the elements  : \n");
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of the Array are : \n");
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    //Step3 : Free the memory
    free(ptr);
    
    return EXIT_SUCCESS;
} 