#include <stdio.h>

int main()
{
    int num, i, j;
    for (i=1;i<=16;i++) {
        num = 2*i;
        for (j=1; j<=num; j++) {
            printf("*");
        }
        printf("\n");
    }
}