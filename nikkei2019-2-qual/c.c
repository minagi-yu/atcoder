#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (void)
{
    intmax_t N, A[(int)1e5], B[(int)1e5];
    intmax_t ans = 0, sub[(int)1e5], num;

    scanf("%jd", &N);
    for (size_t i = 0; i < N; i++) {
        scanf("%jd", &A[i]);
    }
    for (size_t i = 0; i < N; i++) {
        scanf("%jd", &B[i]);
        sub[i] = B[i] - A[i];
        if (sub[i] != 0) {
            if (sub[i] < 0) {
                num--;
            } else {
                num++;
            }
        }
    }

    if (num > 0) {
        puts("No");
        return 0;
    }
    

    printf("%jd\n", ans);

    return 0;
}
