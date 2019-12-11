#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main (int argc, char const *argv[])
{
    int64_t N, K;
    int64_t ans = 0;

    scanf("%"PRId64"%"PRId64, &N, &K);

    printf("%"PRId64"\n", N - K + 1);
}
