#include<stdio.h>
//Write a program to calculate simple interest for a given P = 4000, T = 2, R = 5.5. (I = P * T * R / 100)

int main(void){
    float P, T, R, I;
    P = 4000;
    T = 2;
    R = 5.5;
    I = P*T*R/100;
    printf("The simple interest is %f", I);
    return 0;
}