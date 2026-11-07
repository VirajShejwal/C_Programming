//write a program which accept number from user and display below pattern/*
//Input: 5
//Output: * * * * * # # # # #*/

#include<stdio.h>

void Display(int No)
{
   int iCnt=0;
   if(No > 0)
    {
        No = -No;
    }
   for(iCnt =1; iCnt <= No ; iCnt++)
   {
        printf("*\t ");
   }
   for(iCnt =1; iCnt <= No ; iCnt++)
   {
        printf("#\t ");
   }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}