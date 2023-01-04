//TWIN PRIME

#include<stdio.h>
#include<math.h>

//function to check prime number
int isPrimeNumber(int num){
    int i = 0,flag = 1;
    if(num <= 1)
    {
        flag = 0;
    }
    else
    {
        for(i = 2; i <= (num/2); i++)
        {
            if((num % i) == 0)  // Check prime num
            {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}

int main(){
    int num1, num2,i, isTwinPrimePresent = 0;
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    
    for(i = num1; i < num2; ++i){
        if(isPrimeNumber(i) && isPrimeNumber(i+2))
        {
            printf("{%d, %d}\n", i, i+2);
            isTwinPrimePresent = !isTwinPrimePresent?1:isTwinPrimePresent;
        }
    }

    if(!isTwinPrimePresent){
        printf("Twin Prime not found\n");
    }
    return 0;
}