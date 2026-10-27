//check no is even or not

#include<stdio.h>
#include<stdlib.h>

void DisplayEvenDigits(int iNo)
{
    int iDigit =0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    while (iNo!=0)
    {
        iDigit=iNo % 10;
        if(iDigit % 2 ==0)
        {
             printf("%d\n",iDigit);

        }
        iNo=iNo / 10;
    }
    
}
int main()
{
    int ivalue =0;

    printf("enter number :\n");
    scanf("%d",&ivalue);

    DisplayEvenDigits(ivalue);

    return EXIT_SUCCESS;
}