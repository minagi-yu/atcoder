#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main (int argc, char const *argv[])
{
    int64_t A, P;
    int64_t ans = 0;

    scanf("%"PRId64"%"PRId64, &A, &P);

    ans = (A * 3 + P) / 2;

    printf("%"PRId64"\n", ans);
}
