#include<stdio.h>
#include<stdlib.h>

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

int Addition(
                int iNo1,                   //First input
                int iNo2                    //Second input   
            )
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
    if(scanf("%d", &iValue1) !=1)
    {
        fprintf(stderr,"Unable to proceed as input is invalid\n");
        
        return EXIT_FAILURE;
    }


    printf("Enter Second number :\n");
    if(scanf("%d", &iValue2) !=1)
    {
        fprintf(stderr,"Unable to proceed as input is invalid\n");
        
        return EXIT_FAILURE;
    }

    iResult  = Addition(iValue1 , iValue2) ;     

    printf("Addition is : %d\n" ,iResult);

    return EXIT_SUCCESS;
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
