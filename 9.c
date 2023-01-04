//CHECK IF THREE COORDINATES ARE COLINEAR (USING SLOPE)

#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;

    printf("Enter the first point:  "); scanf("%d %d", &x1, &y1);
    printf("Enter the second point:  "); scanf("%d %d", &x2, &y2);
    printf("Enter the third point:  "); scanf("%d %d", &x3, &y3);

    printf("THE CO-ORDINTATES YOU ENTERED ARE: \n (%d, %d) & (%d, %d) & (%d, %d)", x1, y1, x2, y2, x3, y3);

    int slopeAB = (y2-y1)/(x2-x1);
    int slopeBC = (y3-y2)/(x3-x2);
    int slopeAC = (y3-y1)/(x3-x1);

    if (slopeAB == slopeBC && slopeAB == slopeAC){
        printf("\nThese points are COLLINEAR!!!");
    } else {
        printf("\nThese points are NOT COLLINEAR!!!");
    }
    
    return 0;
}