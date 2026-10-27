
#include<stdio.h>
#include<stdlib.h>

int CountDigit(int iNo)
{
    int iDigit =0;
    int iCount=0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    while (iNo !=0)
    {
        iDigit=iNo % 10;
        iCount++;
        iNo=iNo / 10;
    }

    return iCount;
    
}

int SumDigit(int iNo)
{
    int iDigit =0;
    int iSum=0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    while (iNo !=0)
    {
        iDigit=iNo % 10;
        iSum = iSum+iDigit;
        iNo=iNo / 10;
    }

    return iSum;
    
}


int main()
{
    int ivalue =0 ,iSum = 0, iCount = 0;
    float fAvg =0.0f;
    

    printf("enter number :\n");
    scanf("%d",&ivalue);

    iSum = SumDigit(ivalue);
    iCount = CountDigit(ivalue);

    fAvg = (float)iSum / (float)iCount ;           

    printf("Number of digit : %d\n",iCount);
    printf("Summation of digit : %d\n",iSum);
    printf("Average of digit : %.2f\n",fAvg);

    return EXIT_SUCCESS;
}