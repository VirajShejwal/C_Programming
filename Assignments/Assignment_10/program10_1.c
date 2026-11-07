/*write a program which accepts radius of circle from user and calculates its area consider value of pI as 3.14(Area = pI * radius * radius)
input : 5.3
output : 88.2026
*/

#include<stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = 3.14 *fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %lf",dRet);

    return 0;
}