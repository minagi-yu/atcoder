#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main (int argc, char const *argv[])
{
    int64_t N;
    int64_t ans = 0;

    scanf("%"PRId64, &N);

    for (int i = 1; i < N; i++) {
        if ((N / i) == (N % i)) ans++;
    }

    printf("%"PRId64"\n", ans);
}
