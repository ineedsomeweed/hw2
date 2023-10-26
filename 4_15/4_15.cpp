#include <iostream>

int main()
{
    float n= 10.0, r=0.10;

    printf("initial investement of $5000, for 15 years\n");
    printf("5000* 15* rete: \n");
    for (int i = 0; i < 5; i++) {
    
        printf("Rates of %.2f%%: %f\n", n, 5000*15*r);
        n += 5;
        r = r+ 0.05;
    }


    

}