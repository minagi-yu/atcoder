#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>


int main (int argc, char const *argv[])
{
    int64_t K, A, B;
    int64_t i, ans = 0;

    scanf("%"PRId64"%"PRId64"%"PRId64, &K, &A, &B);

    if (A >= (B - 1)) {
        printf("%"PRId64"\n", 1 + K);
        return 0;
    }

    ans = A + (K - (A - 1)) / 2 * (B - A) + (K - (A - 1)) % 2;

    printf("%"PRId64"\n", ans);
}
