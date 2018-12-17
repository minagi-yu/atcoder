#include <stdio.h>

int main (void) {
    int n, a, i;
    long long sum = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a);
        sum += a - 1;
    }

    printf("%lld\n", sum);
}
