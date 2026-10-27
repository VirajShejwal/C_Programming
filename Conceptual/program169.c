//Avg of the number additon
//eg : 45 ->9   avg is 4.5


#include<stdio.h>
#include<stdlib.h>

float AverageDigit(int iNo)
{
    int iDigit = 0, iSum = 0, iCount = 0;
    float fAvg = 0.0f;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        return 0.0f;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iCount++;
        iNo = iNo / 10;
    }

    fAvg = (float)iSum / iCount;

    return fAvg;
}

int main()
{
    int ivalue = 0;
    float fRet = 0.0f;

    printf("Enter number:\n");
    scanf("%d", &ivalue);

    fRet = AverageDigit(ivalue);

    printf("Average of digits: %.2f\n", fRet);

    return EXIT_SUCCESS;
}
