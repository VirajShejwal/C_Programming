/*Write a program which displays ASCII table. Table contains symbol,Decimal,HexaDecimal and Otal representation of every member from 0 to 255*/


#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("Decimal\tHexadecimal\tOctal\tSymbol\n");
    printf("------------------------------------------\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%d\t%X\t\t%o\t", iCnt, iCnt, iCnt);

        if(iCnt >= 32 && iCnt <= 126)
        {
            printf("%c", iCnt);
        }
        else
        {
            printf("Non-printable");
        }

        printf("\n");
    }
}

int main()
{
    DisplayASCII();

    return 0;
}
