#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main (int argc, char const *argv[])
{
    int64_t N;

    scanf("%"PRId64, &N);

    printf("%"PRId64"\n", N - 1);

    return 0;
}
