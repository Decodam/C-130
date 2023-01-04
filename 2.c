//WAP IN C THAT TAKE THE CELSIUS TEMPERATURE IN FERNHEIT TEMPERATURE

#include <stdio.h>

int main() {
    int temp, result;
    printf("Enter the temperature in celsius:    ");
    scanf("%d", &temp);

    result = ((temp*9)/5)+32;

    printf("The temperature in fernheit scale is %d", result);

    return 0;
}