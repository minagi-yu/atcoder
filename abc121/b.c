#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main (int argc, char const *argv[])
{
    int64_t N, M, C, B[20], A[20][20];
    int64_t sum, ans = 0;

    scanf("%"PRId64"%"PRId64"%"PRId64, &N, &M, &C);
    for (int i = 0; i < M; i++) {
        scanf("%"PRId64, &B[i]);
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%"PRId64, &A[i][j]);
        }
    }
    
    for (int i = 0; i < N; i++) {
        sum = 0;
        for (int j = 0; j < M; j++) {
            sum += A[i][j] * B[j];
        }
        sum += C;
        if (sum > 0) ans++;
    }

    printf("%"PRId64"\n", ans);

    return 0;
}
