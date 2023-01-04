// C program to find sum of prime numbers in given range

#include <stdio.h>

int main()
{
    int i, j, start=10, end=50;
    int isPrime, sum=0;


    for(i=start; i<=end; i++)
    {

        /* Check if the current number i is Prime or not */
        isPrime = 1;
        for(j=2; j<=i/2 ;j++)
        {
            if(i%j==0)
            {
                /* 'i' is not prime */
                isPrime = 0;
                break;
            }
        }

        /*
         * If i is Prime then add to sum
         */
        if(isPrime==1)
        {
            sum += i;
        }
    }

    printf("Sum of all prime numbers between %d to %d = %d", start, end, sum);

    return 0;
}