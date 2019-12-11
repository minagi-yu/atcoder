#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main (int argc, char const *argv[])
{
    int64_t N, K;
    char S[51];
    int64_t ans = 0;

    scanf("%"PRId64"%"PRId64, &N, &K);
    scanf("%s", S);

    S[K - 1] |= 0x20;

    printf("%s\n", S);

    return 0;
}
