/*Write a program which accepts number from user and print that number of $ & * oon screen
INPUT : 5
Output : $  *   $   *   $   *   $   *   $  * */
//////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern (int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo * 2 ) - 1; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("$ ");
        }
        else
        {   
            printf("* ");

       }
    }
    printf("\n");

}

int main()
{
    int iValue =0;
    printf("Enter number: \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}