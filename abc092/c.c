#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int n, a[(int)10e5], i, sum = 0;

    scanf("%d", &n);
    a[0] = 0;
    for(i = 1; i < (n + 1); ++i) {
        scanf("%d", &a[i]);
        sum += abs(a[i] - a[i - 1]);
    }
    a[n + 1] = 0;
    sum += abs(a[n + 1] - a[n]);

    for(i = 1; i < (n + 1); ++i) {
        printf("%d\n", sum - abs(a[i] - a[i - 1]) - abs(a[i] - a[i + 1]) + abs(a[i - 1] - a[i + 1]));
    }
}
