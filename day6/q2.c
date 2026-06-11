#include <stdio.h>
#include <math.h>

int main()
{
    long long bin;
    int dec = 0, i = 0, rem;

    scanf("%lld", &bin);

    while(bin != 0)
    {
        rem = bin % 10;
        dec += rem * pow(2, i);
        bin /= 10;
        i++;
    }

    printf("%d", dec);

    return 0;
}