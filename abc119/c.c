#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    int64_t N, A[(int)1e5];
    int64_t min, ans = 0;

    scanf("%"PRId64, &N);
    for (int i = 0; i < N; i++) {
        scanf("%"PRId64, &A[i]);
    }

    min = A[0];
    for (int i = 1; i < N; i++) {
        if (min > A[i]) min = A[i];
    }
    
    ans = min;
    while (ans > 1) {
        for (int i = 1; i < N; i++) {
            if ((A[i] % ans) != 0) A[i] %= ans;
        }
        for (int i = 1; i < N; i++) {
            if ((A[i] != 0) && (min > A[i])) min = A[i];
        }

        if (min == ans) {
            break;
        } else {
            ans = min;
        }
    }

    printf("%"PRId64"\n", ans);
}
