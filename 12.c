// To find the factorial of a number

#include <stdio.h>

int main() {
    int num, result = 1;

    printf("ENTER A NUMBER: "); scanf("%d", &num);

    for (num; num > 1; num--)
    {
        result = result*num;
    }
    printf("%d! = %d", num, result);
}