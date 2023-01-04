// WAP IN C THAT CALCULATE THE AREA AND PERIMETER OF SQUARE

#include <stdio.h>

int main() {
    int a, area, perimeter;

    printf("ENTER THE SIDE OF SQUARE:    ");
    scanf("%d", &a);

    area = a*a;
    perimeter = 4*a;

    printf("THE AREA OF SQUARE:  %d \n", area);
    printf("THE PERIMETER OF SQUARE:  %d \n", perimeter);

    return 0;
}