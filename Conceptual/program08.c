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

/////////////////////////////////////////////////////
//
// Function name : Addition
// Input         : Integer , Integer
// Output        : Integer
// Description   : Performs Addition
// Date          : 04/10/2026
// Author        : Viraj Deepak Shejwal
//
/////////////////////////////////////////////////////

int Addition(int iNo1 , int iNo2)
{
    int iAns = 0;

    iAns = iNo1+ iNo2;               //Business logic

    return iAns;
}

/////////////////////////////////////////////////////
//
//  Entry point of the Application
//
/////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 =0 , iResult = 0 ;
   
    printf("Enter first number :\n");
    scanf("%d", &iValue1);

    printf("Enter Second number :\n");
    scanf("%d", &iValue2);

    iResult  = Addition(iValue1 , iValue2) ;     

    printf("Addition is : %d\n" ,iResult);

    return 0;
}


/////////////////////////////////////////////////////
//
//     Step 5 : TEst the program
//
//      Tested test cases
//---------------------------------------------------
//      Input 1       Input2        Output
//--------------------------------------------------
//          10          11          21
//          11          0           11
//          0           11          11
//          20          -9          11
//          -9          20          11
//          -20         -11         -31
//

/////////////////////////////////////////////////////
