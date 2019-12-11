#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    int64_t N, K;
    long double ans = 0.0;

    scanf("%"PRId64"%"PRId64, &N, &K);

    for (int i = 1; i <= N; i++) {
        if (i <= (K - 1)) {
            ans += powl(0.5, ceill(log2l((long double)K / (long double)i)));
        } else {
            ans += 1.0;
        }
    }

    ans /= (long double)N;

    printf("%.10Lf\n", ans);
}
