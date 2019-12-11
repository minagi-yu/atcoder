#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int compchar (const void *a, const void *b)
{
    if(*(char *)a - *(char *)b < 0)
        return -1;
    if(*(char *)a - *(char *)b > 0)
        return 1;
    return 0;
}

int compstr(const void *a, const void *b)
{
    return strcmp((char *)a, (char *)b);
}

int main (void)
{
    size_t N;
    intmax_t tmp = 0, ans = 0;
    char s[(int)1e5][11];

    scanf("%jd", &N);
    for (size_t i = 0; i < N; i++) {
        scanf("%s", s[i]);
        qsort(s[i], 10, sizeof(char), compchar);
    }

    qsort(s, N, sizeof(s[0]), compstr);

    for (size_t i = 1; i < N; i++) {
        if (strcmp(s[i - 1], s[i]) == 0) {
            tmp++;
        } else {
            ans += tmp * (tmp + 1) / 2;
            tmp = 0;
        }
    }
    ans += tmp * (tmp + 1) / 2;

    printf("%jd\n", ans);

    return 0;
}
