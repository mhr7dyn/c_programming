#include <stdio.h>

int power(int num, int exp)
{
    if (exp > 1)
    {
        return num* power(num, exp-1);
    }
    else
        return num;
}

int main()
{
    int ans = power(3, 0);
    printf("%d", ans);
}