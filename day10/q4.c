#include <stdio.h>

int main()
{
    int n = 5;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
            printf(" ");

        for(char ch = 'A'; ch <= 'A' + i; ch++)
            printf("%c", ch);

        for(char ch = 'A' + i - 1; ch >= 'A'; ch--)
            printf("%c", ch);

        printf("\n");
    }

    return 0;
}