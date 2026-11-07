/*write a program which accepts distance in km and convert it into meter(1km = 1000m)  
input : 5
output : 5000
*/

#include<stdio.h>

int KmtoMEter(int iNo)
{
    int iAns =0;

    iAns = iNo * 1000;

    return iAns;
}

int main()
{
    int ivalue = 0 ,iRet = 0;

    printf("Enter distance : \n");
    scanf("%d",&ivalue);

    iRet = KmtoMEter(ivalue);

    printf("Distance in meter is : %d\n",iRet);
    return 0;
}