#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

// https://qiita.com/drken/items/3b4fdf0a78e7a138cd9a
long long modpow(long long a, long long n, long long mod)
{
    long long res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}

int main (void)
{
    intmax_t N = 0, D[(int)1e5] = {}, d[(int)1e5] = {};
    intmax_t dmax = 0, ans = 1;

    scanf("%jd", &N);
    for (size_t i = 0; i < N; i++) {
        scanf("%jd", &D[i]);
        d[D[i]]++;
        if (D[i] > dmax) dmax = D[i];
    }

    if (D[0] != 0) {
        puts("0");
        return 0;
    }
    if (d[0] != 1) {
        puts("0");
        return 0;
    }

    for (intmax_t i = 1; i <= dmax; i++) {
        ans *= modpow(d[i - 1], d[i], 998244353);
        ans %= 998244353;
    }

    printf("%jd\n", ans);

    return 0;
}
