/*  
    irow = 4
    iCol = 4

    A B C D
    A B C D
    A B C D
    A B C D
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow , int iCol)
{
    int i = 0, j =0;
    char ch ='\0';

    for(i =  1; i<= iRow ; i++)
    {
        ch = 'A';
        for( j = 1; j<= iCol ; j++,ch++)
        {
            printf("%c\t",ch);
        }
        printf("\n\n");    
    }

}

int main()
{  
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter no of Rows:\n ");
    scanf("%d",&iValue1);

    
    printf("Enter no of Columns:\n ");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);
    
    return EXIT_SUCCESS;
}