/*Write a program which accepts N from user and print all odd numbers up to N.
INPUT : 18
OUTput : 1  3   5   7   9   11  13 */
//////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void OddDisplay (int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo ; iCnt= iCnt + 2)
    {
        printf("%d ", iCnt);
    }
    printf("\n");

}

int main()
{
    int iValue =0;
    printf("Enter number : \n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}