//Count of all digit
#include<stdio.h>
#include<stdlib.h>

int CountDigit(int iNo)
{
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        return 1;
    }

    while(iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int ivalue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &ivalue);

    iRet = CountDigit(ivalue);

    printf("Count of digits: %d\n", iRet);

    return EXIT_SUCCESS;
}
