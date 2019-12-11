#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main (int argc, char const *argv[])
{
    uint64_t N, A, B, C, D, E;
    uint64_t min, ans = 0;

    scanf("%"PRIu64, &N);
    scanf("%"PRIu64, &A);
    scanf("%"PRIu64, &B);
    scanf("%"PRIu64, &C);
    scanf("%"PRIu64, &D);
    scanf("%"PRIu64, &E);

    min = A;
    if (B < min) min = B;
    if (C < min) min = C;
    if (D < min) min = D;
    if (E < min) min = E;

    if (A == min) {
        ans = 0 + ((N + A - 1) / A) + 4;
        printf("%"PRIu64"\n", ans);
        return 0;
    }
    if (B == min) {
        ans = 1 + ((N + B - 1) / B) + 3;
        printf("%"PRIu64"\n", ans);
        return 0;
    }
    if (C == min) {
        ans = 2 + ((N + C - 1) / C) + 2;
        printf("%"PRIu64"\n", ans);
        return 0;
    }
    if (D == min) {
        ans = 3 + ((N + D - 1) / D) + 1;
        printf("%"PRIu64"\n", ans);
        return 0;
    }
    if (E == min) {
        ans = 4 + ((N + E - 1) / E) + 0;
        printf("%"PRIu64"\n", ans);
        return 0;
    }
    return 0;
}
