#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    int64_t a[3], b[3];
    int64_t town[4] = {0};

    scanf("%"PRId64"%"PRId64, &a[0], &b[0]);
    scanf("%"PRId64"%"PRId64, &a[1], &b[1]);
    scanf("%"PRId64"%"PRId64, &a[2], &b[2]);

    town[a[0] - 1] += 1;
    town[a[1] - 1] += 1;
    town[a[2] - 1] += 1;
    town[b[0] - 1] += 1;
    town[b[1] - 1] += 1;
    town[b[2] - 1] += 1;

    if (town[0] < 3 && town[1] < 3 && town[2] < 3 && town[3] < 3) {
        puts("YES");
    } else {
        puts("NO");
    }

    return 0;
}
