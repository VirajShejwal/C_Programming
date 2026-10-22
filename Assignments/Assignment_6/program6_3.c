/*Accept the total purchase amount and calculate the final payable amount after applying the discount below. Negative purchase amounts are invalid.
- Below Rs. 1000: 0% discount
- Rs. 1000 to below Rs. 5000: 10% discount
- Rs. 5000 and above: 20% discount

Expected Output:
Input: 800 -> Payable Amount = 800.00
Input: 2000 -> Payable Amount = 1800.00
Input: 6000 -> Payable Amount = 4800.00

*/

#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if (fAmount < 0)
    {
        printf("Invalid Amount\n");
        return;
    }

    if (fAmount < 1000)
    {
        fDiscount = 0.0f;
    }
    else if (fAmount < 5000)
    {
        fDiscount = 0.10f;
    }
    else
    {
        fDiscount = 0.20f;
    }

    fFinalAmount = fAmount - (fAmount * fDiscount);

    printf("Payable Amount = %.2f\n", fFinalAmount);
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}

