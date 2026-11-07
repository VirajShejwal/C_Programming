/*accept single digitnmber from user and print into word/*
Input: 9
Output: nine*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo == 0)
    {
        printf("zero");
    }
    else if(iNo == 2)
    {
        printf("two");
    }
    
    else if(iNo == 3)
    {
        printf("three");
    }
    
    else if(iNo == 4)
    {
        printf("three");
    }
    
    else if(iNo == 4)
    {
        printf("four");
    }
    
    else if(iNo == 5)
    {
        printf("five");
    }
    
    else if(iNo == 6)
    {
        printf("six");
    }
    
    else if(iNo == 7)
    {
        printf("seven");
    }
    
    else if(iNo == 8)
    {
        printf("eight");
    }
    
    else if(iNo == 9)
    {
        printf("nine");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}