#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    int64_t N;
    char A[101], B[101], C[101];
    int64_t i, ans = 0;

    scanf("%"PRId64, &N);
    scanf("%s", A);
    scanf("%s", B);
    scanf("%s", C);

    for (i = 0; i < N; i++) {
        if (A[i] == B[i] && B[i] == C[i]) {
            continue;
        }
        if (A[i] == B[i] || B[i] == C[i] || C[i] == A[i]) {
            ans += 1;
            continue;
        }
        ans += 2;
    }

    printf("%"PRId64"\n", ans);
}
