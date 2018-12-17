#include <stdio.h>
#include <stdlib.h>

int max (int x, int y)
{
    return x > y ? x : y;
}

int main (void)
{
    int N, x[100], y[100], h[100];
    int Cx, Cy, H = 0;
    int i, j, k;
    int ref;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d %d %d", &x[i], &y[i], &h[i]);
        if (h[i] > 0) ref = i;
    }

    for (Cx = 0; Cx <= 100; Cx++) {
        for (Cy = 0; Cy <= 100; Cy++) {
            H = h[ref] + abs(x[ref] - Cx) + abs(y[ref] - Cy);
            for (k = 0; k < N; k++) {
                if (h[k] != max(H - abs(x[k] - Cx) - abs(y[k] - Cy), 0)) break;
            }
            if (k == N) {
                printf("%d %d %d\n", Cx, Cy, H);
                return 0;
            }
        }
    }

    return 0;
}
