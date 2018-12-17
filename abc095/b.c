#include <stdio.h>

int main (void)
{
    int n, x, m, i, min = 1000;

    scanf("%d %d", &n, &x);
    for (i = 0; i < n; i++) {
        scanf("%d", &m);
        x -= m;
        if (m < min) min = m;
    }

    printf("%d\n", n + (x / min));
}
