#include<stdio.h>
#include<stdlib.h>


void Display(int Arr[],int iLength)
{
    int iCnt =0;

    printf("Elements of the array are : \n");
    
    for(iCnt =0; iCnt < iLength ; iCnt++)
    {
    printf("%d\n",Arr[iCnt]);
    }

}

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

    Display(ptr,iSize);

    //Step3 : Free the memory
    free(ptr);
    
    return EXIT_SUCCESS;
} 