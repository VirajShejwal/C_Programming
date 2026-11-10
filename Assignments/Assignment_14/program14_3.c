/*Write a program which accepts number from  user and display all non factors
Input : 12
Output : 5  7   8   9   10  11 */


#include<stdio.h>

int NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d\n", iCnt);
        }
    }

    return 0;
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}
