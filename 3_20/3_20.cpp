#include <iostream>

int main()
{
    float h,r;

    printf("Enter # of hours of worked (-1 to  end): ");
    scanf_s("%f", &h);
    printf("Enter hourly rate of the worker ($00.00): ");
    scanf_s("%f", &r);
    

    printf("Salary is $%.2f\n", h*r);

}