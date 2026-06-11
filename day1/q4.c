#include <stdio.h>

int main() {
    long long n;
    int count = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    while(n != 0) {
        count++;
        n /= 10;
    }

    printf("Number of digits = %d", count);

    return 0;
}