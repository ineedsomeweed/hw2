// 3_17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int an;
    float bb, ti, tc, cl;
    
    printf("Enter account number (-1 to  end): ");
    scanf_s("%d", &an);
    printf("Enter beginning balance: ");
    scanf_s("%f", &bb);
    printf("Enter total charges: ");
    scanf_s("%f", &ti);
    printf("Enter total credits: ");
    scanf_s("%f", &tc);
    printf("Enter credit limit: ");
    scanf_s("%f", &cl);
    float nb = bb + ti - tc;
    if (nb > bb) {
    
        printf("Account: %d\n", an);
        printf("Credit limit: %.2f\n", cl);
        printf("Balance: %.2f\n", nb);
        printf("Credit Limit Exceeded\n");
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
