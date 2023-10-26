#include <iostream>

int main()
{
    float lp, ir, d;

    printf("Enter loan principal (-1 to  end): ");
    scanf_s("%f", &lp);
    printf("Enter interest rate: ");
    scanf_s("%f", &ir);
    printf("Enter turn of the loan in days: ");
    scanf_s("%f", &d);


    printf("The interst charge is $%.2f\n", lp*ir*d/365);

    }