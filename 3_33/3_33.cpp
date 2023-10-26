#include <iostream>

int main()
{
    int l, b;

    printf("Enter length: ");
    scanf_s("%d", &l);
    printf("Enter breads: ");
    scanf_s("%d", &b);

    for (int i = 0; i < b; i++) {
        for (int j = 0; j < l; j++) {
            if(i== 0|| i==b-1|| j==0|| j==l-1)
                printf("*");
            else
                printf(" ");

        }
        printf("\n");
    }
    

}