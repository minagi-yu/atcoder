#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (void)
{
    intmax_t N, H[(int)1e5];
    intmax_t tmp = 0, ans = 0;

    scanf("%jd", &N);
    for (size_t i = 0; i < N; i++) {
        scanf("%jd", &H[i]);
    }

    for (size_t i = 1; i < N; i++) {
        if (H[i - 1] >= H[i]){
            tmp++;
        } else {
            if (tmp > ans) ans = tmp;
            tmp = 0;
        }
    }
    if (tmp > ans) ans = tmp;

    printf("%jd\n", ans);

    return 0;
}
