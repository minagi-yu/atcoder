#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    intmax_t N, M, a[(int)1e5];
    intmax_t c[(int)1e5 + 1], ans = 1;

    scanf("%jd%jd", &N, &M);
    for (size_t i = 0; i < M; i++) {
        scanf("%jd", &a[i]);
    }

    c[0] = 0;
    c[1] = 1;
    for (size_t i = 2; i <= (int)1e5; i++) {
        c[i] = (c[i - 2] + c[i - 1]) % ((int)1e9 + 7);
    }

    if (M == 0) {
        printf("%jd\n", c[N - 1]);
        return 0;
    }
    
    for (size_t i = 0; i <= M; i++) {
        if (i == 0) {
            ans *= c[a[i]];
        } else if (i == M) {
            ans *= c[N - a[i - 1]];
        } else {
            ans *= c[a[i] - a[i - 1] - 1];
        }
        ans %= (int)1e9 + 7;
    }

    printf("%jd\n", ans);

    return 0;
}
