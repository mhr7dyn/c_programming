#include<stdio.h>
//Write a program to calculate area of a circle having its radius (r = 5).
int main(void){
    double pi, r, Area;
    pi = 3.14159;
    r = 5;
    Area = pi*r*r; 
    printf("The area of a circle having a radius of 5 is %f", Area);
    return 0;

}