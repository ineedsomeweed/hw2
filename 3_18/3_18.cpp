#include <iostream>

int main()
{
    float sales;

    printf("Enter sales in dollars (-1 to  end): ");
    scanf_s("%f", &sales);

    printf("Salary: %.2f\n", 200 + sales * 0.09);

}
