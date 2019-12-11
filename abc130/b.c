#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    intmax_t N, X, L[100], D = 0;
    intmax_t ans = 1;

    scanf("%jd%jd", &N, &X);
    for (size_t i = 0; i < N; i++) {
        scanf("%jd", &L[i]);
    }

    for (size_t i = 0; i < N; i++) {
        D += L[i];
        if (D <= X) ans++;
    }

    printf("%jd\n", ans);

    return 0;
}
