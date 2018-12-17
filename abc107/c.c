#include <stdio.h>

int main (void)
{
    int N, K, x[100000] = {0};
    int i, pos0 = -1, posp, posn;

    scanf("%d %d", &N, &K);
    for (i = 0; i < N; i++) {
        scanf("%d", &x[i]);
        if (x[i] >= 0 && pos0 < 0) pos0 = i;
    }
    if (pos0 < 0) pos0 = i;

    if (pos0 == i || pos0 == 0) {
        if (pos0 == i) {
            printf("%d\n", -x[i - (K - 1)]);
            return 0;
        } else {
            printf("%d\n", x[(K - 1)]);
            return 0;
        }
    }

    if (x[pos0] > -x[pos0 - 1]) pos0 -= 1;
    posn = posp = pos0;

    while (1) {
        if ((posp - posn + 1) >= K) break;

        if (x[posp + 1] > -x[posn - 1]) posn -= 1;
        else  posp += 1;
    }

    if (x[posp] > -x[posn]) {
        printf("%d\n", -x[posn] * 2 + x[posp]);
    } else {
        printf("%d\n", x[posp] * 2 + -x[posn]);
    }

    return 0;
}
