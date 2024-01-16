#include <stdio.h>

int main()
{   
    float weight = 7097070870.88888888888888888888f;
    double dw = 7097070870.88888888888888888888;
    printf("%g\n", weight);
    printf("%f\n", weight);
    printf("%lf\n", weight);
    printf("%lf\n", dw);
    printf("%.2f\n",dw);
}