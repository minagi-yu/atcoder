#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    intmax_t N, K, a[(int)1e5];
    intmax_t sum[(int)1e5 + 1] = {0}, ans = 0;

    scanf("%jd%jd", &N, &K);
    for (size_t i = 0; i < N; i++) {
        scanf("%jd", &a[i]);
        sum[i + 1] = sum[i] + a[i];
    }

    for (size_t i = 0, j = 0; i < (N + 1); i++) {
        if (sum[i] < K) continue;
        ans += j;
        for (; j < i; j++) {
            if ((sum[i] - sum[j]) >= K) {
                ans++;
            } else {
                j--;
                break;
            }
        }
    }

    printf("%jd\n", ans);

    return 0;
}
