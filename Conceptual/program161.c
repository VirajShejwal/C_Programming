
#include<stdio.h>
#include<stdlib.h>

void DisplayEvendigits(int iNo)
{
    int idigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        idigit = iNo % 10;

        if(idigit % 2 == 0)
        {
            printf("%d\n", idigit);
        }

        iNo = iNo / 10;
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter number:\n");
    scanf("%d", &ivalue);

    DisplayEvendigits(ivalue);

    return EXIT_SUCCESS;
}
