//WAP C PROGRAM TO EXCHANGE THE INPUTS OF TWO NUMBERS

#include <stdio.h>

int main() {
    int a, b, c;

    printf("INPUT: \n");
    printf("a = "); scanf("%d", &a);
    printf("b = "); scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("OUTPUT: \n");
    printf("a = %d \n", a);
    printf("b = %d \n", b);

    return 0;
}