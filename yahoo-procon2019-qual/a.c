#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    int64_t N, K;
    int64_t ans = 0;

    scanf("%"PRId64"%"PRId64, &N, &K);

    if ((N / 2 + (N % 2)) >= K) {
        puts("YES");
    } else {
        puts("NO");
    }

    return 0;
}
