/*Accept number of rows and number of columns from user and display below pattern
input : irow = 5    icol = 5
output:  a  b   c   d   e
         1  2   3   4   5
         a  b   c   d   e
         1  2   3   4   5
         a  b   c   d   e*/


#include<stdio.h>

void Pattern(int irow, int icol)
{
    int i = 0, j = 0;

    for(i = 1; i <= irow; i++)
    {
        for(j = 1; j <= icol; j++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t", 'a' + j - 1);
            }
            else
            {
                printf("%d\t", j);
            }
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
