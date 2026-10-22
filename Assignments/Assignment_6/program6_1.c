/*Accept the number of electricity units consumed and calculate the total bill using the following slab-wise rates. Each slab rate applies only to units within that slab:
- First 100 units: Rs. 5 per unit
- Next 100 units: Rs. 7 per unit
- Above 200 units: Rs. 10 per unit
Negative unit consumption is invalid.

Expected Output:
Input: 80 -> Bill = 400.00
Input: 150 -> Bill = 850.00
Input: 250 -> Bill = 1700.00*/

#include <stdio.h>
#include <stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if (iUnits < 0)
    {
        printf("Invalid Units\n");
        return;
    }

    if (iUnits <= 100)
    {
        fBill = iUnits * 5.0f;
    }
    else if (iUnits <= 200)
    {
        fBill = (100 * 5.0f) + ((iUnits - 100) * 7.0f);
    }
    else
    {
        fBill = (100 * 5.0f) + (100 * 7.0f) +
                ((iUnits - 200) * 10.0f);
    }

    printf("Bill = %.2f\n", fBill);
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}


