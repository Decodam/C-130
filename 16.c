#include <stdio.h>
#include <math.h>

int main () {
    int n,t,r,c,s=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    t=n;

    while(t!=0){
        r=t%10;
        c=pow(r,3);
        s=s+c;
        t=t/10;
    }

    if(s==n) {
        printf("Armstrong");
    } else {
        printf("Not Armstrong");
    }

    return 0;
}