// WAP IN C THAT CALCULATE THE AREA AND PERIMETER OF TRIANGLE

#include <stdio.h>

int main() {
    int height, base, side, area, perimeter;

    printf("ENTER THE SIDES OF TRIANGLE (H, B, S):    ");
    scanf("%d %d %d", &height, &base, &side);

    area = 0.5*base*height;
    perimeter = height + base + side;

    printf("THE AREA OF TRIANGLE:  %d \n", area);
    printf("THE PERIMETER OF TRIANGLE:  %d \n", perimeter);

    return 0;
}