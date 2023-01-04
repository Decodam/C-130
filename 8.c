// DETERMINE IF A YEAR IS LEAP YEAR OR NOT
#include <stdio.h>

int main() {
    int year;
    printf("ENTER THE YEAR:    "); 
    scanf("%d", &year);

    if (year%4 == 0){
        printf("This is a leap year");
    } else {
        printf("This is not a leap year");
    }

    return 0;
}