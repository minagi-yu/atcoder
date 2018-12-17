#include <stdio.h>

long long get_gcd(long long a, long long b) {
    if (b == 0) return a;
    else return get_gcd(b, a % b);
}

long long get_lcm(long long a, long long b) {
    long long g = get_gcd(a, b);
    return a / g * b;
}

int main (void)
{
    int n, m;
    char s[(int)1e5 + 1], t[(int)1e5 + 1];

    long long gcd, lcm, i;

    scanf("%d %d", &n, &m);
    scanf("%s", s);
    scanf("%s", t);

    gcd = get_gcd(n, m);
    lcm = get_lcm(n, m);

    for (i = 0; i < gcd; i++) {
        if (s[lcm / m * i] != t[lcm / n * i]) break;
    }

    if (i >= gcd) printf("%lld\n", lcm);
    else puts("-1");

    return 0;
}
