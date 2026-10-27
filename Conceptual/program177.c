//accept number from user and check whether(boolean pahije) the number is pallindrome
/*eg 8998 is also 8998*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iDigit =0 , iRev =0;
    int iTemp = iNo;

    iTemp = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo/10;
    }

    if(iRev == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter number :\n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);

    if(bRet == true)           
    {
        printf("Number is Pallindrome:\n");
    }
    else 
    {
        printf("Number is not Pallindrome:\n");
    }

    return EXIT_SUCCESS;
}