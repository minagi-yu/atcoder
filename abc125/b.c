#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>


int main (int argc, char const *argv[])
{
    int64_t N, V[20], C[20];
    int64_t ans = 0;

    scanf("%"PRId64, &N);
    for (int i = 0; i < N; i++) {
        scanf("%"PRId64, &V[i]);
    }
    for (int i = 0; i < N; i++) {
        scanf("%"PRId64, &C[i]);
    }

    for (int i = 0; i < N; i++) {
        if (V[i] > C[i]) ans += V[i] - C[i];
    }
    
    printf("%"PRId64"\n", ans);
}
