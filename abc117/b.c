#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    int64_t N, L[10];
    int64_t i, sum = 0;

    scanf("%"PRId64, &N);
    for (i = 0; i < N; i++) {
        scanf("%"PRId64, &L[i]);
        sum += L[i];
    }

    for (i = 0; i < N; i++) {
        if ((L[i] * 2) >= sum) break;
    }

    if (i == N) {
        puts("Yes");
    } else {
        puts("No");
    }

    return 0;
}
