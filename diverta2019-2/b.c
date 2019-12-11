#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

struct ball {
    intmax_t x;
    intmax_t y;
};

int compare (const void *a, const void *b)
{
    if(*(intmax_t *)a - *(intmax_t *)b < 0)
        return -1;
    if(*(intmax_t *)a - *(intmax_t *)b > 0)
        return 1;
    return 0;
}

int main (int argc, char const *argv[])
{
    intmax_t N;
    struct ball ball[50];
    intmax_t dx[1225], dy[1225], ans = 0;

    scanf("%jd", &N);
    for (size_t i = 0; i < N; i++) {
        scanf("%jd%jd", &ball[i].x, &ball[i].y);
    }

    if (N == 1) {
        puts("1");
        return 0;
    }

    intmax_t c;
    for (intmax_t i = 1; i < N; i++) c += i;

    size_t k = 0;
    for (size_t i = 0; i < N; i++) {
        for (size_t j = i + 1; j < N; j++) {
            dx[k] = ball[i].x - ball[j].y;
            dy[k] = ball[i].x - ball[j].y;
        }
        k++;
    }



    printf("%jd\n", ans);
}
