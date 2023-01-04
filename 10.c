#include <stdio.h>

int main() {
    int a, b, results;

    printf("Enter your MAIN and SUBSIDIARY marks respectively: "); scanf("%d %d", &a, &b);

    if (a >= 55 && b >=45){
        printf("Yeah, you passed. The person sitting before you must have really studied :/");
    } else if(a <= 55 && b >= 55) {
        printf("Close call, Barely passed bro..");
    } else if (a >= 65 && b < 45) {
        printf("U mono celled moron, give the exam again!");
    } else {
        printf("Congratulations you failed! Atleast try to impress the ladies on the next class :)");
    }
    

    return 0;
}