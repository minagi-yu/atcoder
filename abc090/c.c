#include <stdio.h>

int main (void)
{
    long long n, m;

    scanf("%lld %lld", &n, &m);

    if (n == 1 && m == 1) {
        puts("1");
    } else if (n == 1) {
        printf("%lld\n", m - 2);
    } else if (m == 1) {
        printf("%lld\n", n - 2);
    } else {
        printf("%lld\n", (n - 2) * (m - 2));
    }
}
