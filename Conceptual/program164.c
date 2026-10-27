
#include<stdio.h>
#include<stdlib.h>

// Display odd digits
void DisplayOddDigits(int iNo)
{
    int idigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        idigit = iNo % 10;

        if(idigit % 2 != 0)
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

    DisplayOddDigits(ivalue);

    return EXIT_SUCCESS;
}
