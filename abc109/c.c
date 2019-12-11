#include <inttypes.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

uint64_t get_gcd(uint64_t a, uint64_t b)
{
    if (b == 0)
        return a;
    else
        return get_gcd(b, a % b);
}

int main(int argc, char const* argv[])
{
    int64_t N, X, x[(int)1e5];
    int64_t gcd, d[(int)1e5];

    scanf("%" PRId64 "%" PRId64, &N, &X);
    for (int i = 0; i < N; i++) {
        scanf("%" PRId64, &x[i]);
        d[i] = llabs(x[i] - X);
    }

    gcd = d[0];
    for (int i = 1; i < N; i++) {
        gcd = get_gcd(gcd, d[i]);
    }

    printf("%" PRId64 "\n", gcd);
}
