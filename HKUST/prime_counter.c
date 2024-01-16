#include <stdio.h>

// Write a program that counts the total number of prime numbers till a certain number that
// that the user inputs

int main()
{
    int num,i,x, divisors, np;
    printf("enter a num:\n");
    scanf("%d", &num);
    np = 0;

    for (x=1; x<=num; x++){

        divisors = 0;
        for (i=1; i<x; i++){

            if (x%i == 0){
                divisors++;
            }
        }
        if (divisors == 1){
            np++;
        }

    }
    printf("%d primes till %d", np, num);






}