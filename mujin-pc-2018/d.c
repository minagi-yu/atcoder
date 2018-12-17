#include <stdio.h>

int rev (int x) {
    int y = 0;
    while (x > 0) {
        y *= 10;
        y += (x % 10);
        x /= 10;
    }
    return y;
}

int main (void)
{
    int n, m;

    scanf("%d %d", &n, &m);

    n = rev(n);

    printf("%d\n", n);
}