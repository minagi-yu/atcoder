#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main (int argc, char const *argv[])
{
    int64_t N, H;
    int64_t max = 0, ans = 0;

    scanf("%"PRId64, &N);
    for (int i = 0; i < N; i++) {
        scanf("%"PRId64, &H);
        if (H >= max) {
            max = H;
            ans++;
        }
    }

    printf("%"PRId64"\n", ans);

    return 0;
}
