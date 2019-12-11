#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main (int argc, char const *argv[])
{
    int64_t A, B;
    int64_t ans = 0;

    scanf("%"PRId64"%"PRId64, &A, &B);

    if (A > B) {
        ans = A + (A - 1);
    } else if (A < B) {
        ans = B + (B - 1);
    } else {
        ans = A + B;
    }

    printf("%"PRId64"\n", ans);

    return 0;
}
