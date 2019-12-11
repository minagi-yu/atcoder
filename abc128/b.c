#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <stdlib.h>

struct restaurant {
    int64_t i;
    char S[11];
    int64_t P;
};

int compare (const void *a, const void *b)
{
    int rc;
    rc = strcmp(((struct restaurant *)a)->S, ((struct restaurant *)b)->S);
    if (rc == 0) {
        if(((struct restaurant *)a)->P - ((struct restaurant *)b)->P < 0)
            return 1;
        if(((struct restaurant *)a)->P - ((struct restaurant *)b)->P > 0)
            return -1;
        return 0;
    } else {
        return rc;
    }
}

int main (int argc, char const *argv[])
{
    int64_t N;
    struct restaurant r[100];
    int64_t ans = 0;

    scanf("%"PRId64, &N);
    for (int i = 0; i < N; i++) {
        scanf("%s""%"PRId64, r[i].S, &r[i].P);
        r[i].i = i + 1;
    }

    qsort(r, N, sizeof(struct restaurant), compare);

    for (int i = 0; i < N; i++) {
        printf("%"PRId64"\n", r[i].i);
    }
}
