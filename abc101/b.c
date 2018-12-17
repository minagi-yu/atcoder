#include <stdio.h>

int main (void)
{
    int n, a, sum = 0;

    scanf("%d", &n);

    a = n;

    while (a) {
        sum += a % 10;
        a /= 10;
    }

    if (n % sum) puts("No");
    else puts("Yes");
}
