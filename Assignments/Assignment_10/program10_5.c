/*write a program which accepts area in square feet and convert it into square meter(1 sq feet = 0.0929 sq m)  
input : 5
output : 0.464515
*/

#include<stdio.h>

double SquareMeter(int iValue)
{
    double dAns = 0.0;

    dAns = iValue * 0.0929;
    
    return dAns;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in sq feet: \n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf(" Area in square meter is : %lf\n",dRet);
    return 0;
}