/*write a program which accepts temperature in Fahrenheit and convert it into celcius(1celcius =(fahrenheit -32) *(5/9)  
input : 10
output : -12.2222(10 -32)*(5/9)
*/

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dAns = 0.0;

    dAns = (fTemp -32) * (5.0 /9.0);
    
    return dAns;
}

int main()
{
    float fvalue = 0.0;
    double dRet = 0.0;

    printf("Enter temp in fahrehneit : \n");
    scanf("%d",&fvalue);

    dRet = FhtoCs(fvalue);

    printf(" temp in celciusis : %lf\n",dRet);
    return 0;
}