#include <stdio.h>

int main()
{
    int n, largest = -1;

    scanf("%d", &n);

    for(int i = 2; i <= n; i++)
    {
        while(n % i == 0)
        {
            largest = i;
            n /= i;
        }
    }

    printf("%d", largest);

    return 0;
}