// 4_31.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    for (int i = 1; i <= 5; i++) {
        for (int k = 0; k < 5-i; k++) {
            printf(" ");
        }
        for (int j = 0; j < 2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i <= 4; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 8-i*2+1; k++) {
            printf("*");
        }
        
        printf("\n");
    }
}
