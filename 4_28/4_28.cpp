#include <iostream>

int main()
{
    int c;

    printf("Enter pay code (1 to 4): ");
    scanf_s("%d", &c);
    switch (c) {

    case 1:
        printf("Salary for this week: $5000\n");
        break;
    case 2:
        float h, hw;
        printf("Hours: ");
        scanf_s("%f", &h);
        printf("Hourly wage: ");
        scanf_s("%f", &hw);

        if(h>40)
            printf("Salary for this week: $%f\n ", ((h-40)*1.5+40)*hw);
        else
            printf("Salary for this week: $%f\n ", 40 * hw);
        break;
    case 3:
        float g;
        printf("Gross weekly seles: ");
        scanf_s("%f", &g);
        printf("Salary for this week: $%f\n ", 250+ 0.057*g);
        break;
    case 4:
        float a, f;
        printf("Amount: ");
        scanf_s("%f", &a);
        printf("Fee: ");
        scanf_s("%f", &f);
        printf("Salary for this week: $%f\n ", a*f);
        break;
    default:
        printf("Enter the right code pls ==\n");
    }

}