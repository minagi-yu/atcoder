#include <stdio.h>

int main (void)
{
    int n, x[(int)10e5], v[(int)10e5], i, p = 0;
    long long c, tokei = 0, hantokei = 0;

    scanf("%d %lld", &n, &c);
    for (i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &v[i]);
        if (x[i] < c / 2) {
            tokei += v[i] - (x[i] - x[i - 1]);
        }
    }
    for (i = n - 1; i >= 0; i--) {
        if (x[i] > c / 2) {
            hantokei += v[i] + (c - x[i]);
        } else break;
    }

    if (tokei > hantokei) {
        p = 
    }


    printf("%d\n", p);
}
