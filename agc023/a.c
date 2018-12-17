#include <stdio.h>

int main (void)
{
    int n, x = 0, i, j;
    long long a[2 * (int)10e5], sum;

    scanf("%d\n", &n);
    for (i = 0; i < n; ++i) {
        scanf("%lld", &a[i]);
    }

    if (n > 1) {
        for (i = 0; i < (n - 1); i++) {
            sum = a[i];
            if (sum == 0) x++;
            for (j = (i + 1); j < n; j++) {
                sum += a[j];
                if (sum == 0) x++;
            }
        }
    }
    
    if (a[n - 1] == 0) x++;

    printf("%d\n", x);
}
