/*
    --------------------------------
            Operation ||
    -------------------------------        
    Result1  Result2  Result2
    -------------------------------
      True     True     TRue               short circuit
      True     False    True               short circuit
      False    True     True
      False    False    False
    -------------------------------

*/
#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if(((iNo % 3 )==0) || ((iNo % 5) == 0))
    {
        printf("It is divisible \n");
    }
    else
    {
        printf("It is not divisible \n");
    }
}
int main()
{
    int iValue= 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}