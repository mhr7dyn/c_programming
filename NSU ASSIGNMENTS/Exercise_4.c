#include<stdio.h>
//Write a program to calculate area of an ellipse having its axes (minor = 4 cm, major = 6 cm).

int main(void){
    double pi, minor,major, Area;
    pi = 3.14159;
    minor = 4;
    major = 6;
    Area = pi*minor*major; 
    printf("The area of an ellipse having its axes (minor = 4 cm, major = 6 cm) is %f", Area);
    return 0;
}