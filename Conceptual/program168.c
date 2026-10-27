//Avg of the number additon
//eg : 45 ->9   avg is 4.5


#include<stdio.h>
#include<stdlib.h>

float AverageDigit(int iNo)
{
    //LOGic
}
int main()
{
    int ivalue =0;
    int fRet =0;

    printf("enter number :\n");
    scanf("%d",&ivalue);

    fRet = AverageDigit(ivalue);

    printf("Average of digit : %d\n",fRet);

    return EXIT_SUCCESS;
}