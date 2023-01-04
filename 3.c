// WAP IN C THAT CALCULATE AREA AND PERIMETER OF A RECTANGLE

#include <stdio.h>

int main() {
    int a, b, area, perimeter;

    printf("ENTER THE SIDES OF RECTANGLE:    ");
    scanf("%d %d", &a, &b);

    area = a*b;
    perimeter = 2*(a+b);

    printf("THE AREA OF RECTANGLE:  %d \n", area);
    printf("THE PERIMETER OF RECTANGLE:  %d \n", perimeter);

    return 0;
}