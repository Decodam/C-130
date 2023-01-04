//WAP to find the sales on a product

#include <stdio.h>

int main() {
    int price;

    printf("Enter the price of the product: "); scanf("%d", &price);

    if(price >= 5000 && price <= 9999) {
        printf("5 percent discount");
    } else if(price >= 10000 && price <= 19999) {
        printf("10 percent discount");
    } else if(price >= 20000 && price <= 39999) {
        printf("15 percent discount");
    } else if(price >= 40000 && price <= 49999) {
        printf("15 percent discount");
    } else if(price >= 50000) {
        printf("15 percent discount");
    } else {
        printf("No discount for you :(");
    }

    return 0;
}