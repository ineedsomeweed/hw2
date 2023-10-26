
#include <iostream>

int main()
{
    //a
    printf("(a)\n");
    for (int i = 1; i <= 10; i++) {
        for (int j = 0; j < i; j++) {
            printf("%s", "*");

        }
        printf("\n");
    }

    //b
    printf("\n(b)\n");

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10 - i + 1; j++){
            printf("%s", "*");
        }
        printf("\n");
    }
    
    //c
    printf("\n(c)\n");

    for (int i = 0; i < 10; i++) {
        for (int k = 0; k < i; k++) {
            printf("%s", " ");
        }
        for (int j = 10; j >i; j--) {
            printf("%s", "*");
        }
        printf("\n");
    }

    //d
    printf("\n(d)\n");

    for (int i = 1; i <= 10; i++) {
        
        for (int j = 10; j > i; j--) {
            printf("%s", " ");
        }
        for (int k = 0; k < i; k++) {
            printf("%s", "*");
        }
        printf("\n");
    }
}


