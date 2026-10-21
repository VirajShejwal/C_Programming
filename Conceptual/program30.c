#include<stdio.h>
#include<stdlib.h>


int main()
{

    char sName[30];
    int iAge =0;
    float fMarks =0.0f;

    printf("Enter your name :\n");
    scanf("%29[^'\n']s",sName);     //enter remains in input buffer
    
    printf("Enter your Age : \n");
    scanf("%d",iAge);

    printf("Enter your marks : \n");
    scanf("%f",&fMarks);


    printf("Welcome %s\n", sName);
    printf("Your Age is : %d\n",iAge);
    printf("Your marks : %f\n",fMarks);
    

    return EXIT_SUCCESS;
}