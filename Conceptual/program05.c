/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the progfgram language
    Step 4 : Write the program
    Step 5 : TEst the program
*/

///////////////////////////////////////////////////////
//
//    Step 1 : Understand the problem statement
//             User is going to enter any two integers 
//             and we have to perform addition
//////////////////////////////////////////////////////

//////////////////////////////////////////////////////
//    Step 2 : Write the algorithm
/*    START
            Accept first number as NO1
            Accept first number as NO2
            Create the variable as Ans to store the result
            Perform the addition and store into Ans
            Display the result from Ans
      END
*/
//////////////////////////////////////////////////////

/////////////////////////////////////////////////////
//      Step 3 : Decide the progfgram language
//               We select C programming
/////////////////////////////////////////////////////

/////////////////////////////////////////////////////
//      Step 4 : Write the program
//
/////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int iValue1 = 0, iValue2 =0 , iResult = 0 ;
   
    printf("Enter first number :\n");
    scanf("%d", &iValue1);

    printf("Enter Second number :\n");
    scanf("%d", &iValue2);

    iResult  = iValue1 + iValue2 ;     //Business logic

    printf("Addition is : %d\n" ,iResult);

    return 0;
}
