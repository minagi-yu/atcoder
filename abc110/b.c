#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main (int argc, char const *argv[])
{
    int64_t N, M, X, Y, x[100], y[100];
    int64_t xmax, ymin, ans = 0;

    scanf("%"PRId64"%"PRId64"%"PRId64"%"PRId64, &N, &M, &X, &Y);
    for (int i = 0; i < N; i++) {
        scanf("%"PRId64, &x[i]);
    }
    for (int i = 0; i < M; i++) {
        scanf("%"PRId64, &y[i]);
    }

    xmax = X;
    for (int i = 0; i < N; i++) {
        if (xmax < x[i]) xmax = x[i];
    }
    ymin = Y;
    for (int i = 0; i < M; i++) {
        if (ymin > y[i]) ymin = y[i];
    }

    if (xmax < ymin) {
        puts("No War");
    } else {
        puts("War");
    }

    return 0;
}
