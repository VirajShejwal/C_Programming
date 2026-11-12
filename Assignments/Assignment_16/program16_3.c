/*Accept number of rows and number of columns from user and display below pattern
input : iRow = 3   icol = 5
output: A   A   A   A   A   A
        B   B   B   B   B   B  
        C   C   C   C   C   C */

        
#include<stdio.h>

void Pattern(int irow, int icol)
{
    int i = 0, j = 0;

    for(i = 0; i < irow; i++)
    {
        for(j = 0; j < icol; j++)
        {
            printf("%c\t", 'A' + i);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
