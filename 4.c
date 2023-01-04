// WAP IN C THAT CALCULATE THE AREA AND PERIMETER OF CIRCLE


#include <stdio.h>

int main() {
    int a, area, perimeter;

    printf("ENTER THE RADIUS OF CIRCLE:    ");
    scanf("%d", &a);

    area = 3.14*a*a;
    perimeter = 2*3.14*a;

    printf("THE AREA OF CIRCLE:  %d \n", area);
    printf("THE PERIMETER OF CIRCLE:  %d \n", perimeter);

    return 0;
}