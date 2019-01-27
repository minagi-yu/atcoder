#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

typedef struct {
    int64_t A;
    int64_t B;
    int64_t s;
} dish_t;

int compare (const void *a, const void *b)
{
    if(((dish_t *)a)->s - ((dish_t *)b)->s < 0)
        return 1;
    if(((dish_t *)a)->s - ((dish_t *)b)->s > 0)
        return -1;
    return 0;
}

int main (int argc, char const *argv[])
{
    int64_t N;
    dish_t dish[(int)1e5];
    int64_t i, takahashi = 0, aoki = 0;

    scanf("%"PRId64, &N);

    for (i = 0; i < N; i++) {
        scanf("%"PRId64"%"PRId64, &dish[i].A, &dish[i].B);
        dish[i].s = dish[i].A + dish[i].B;
    }

    qsort(dish, N, sizeof(dish_t), compare);

    for (i = 0; i < N; i++) {
        if (i % 2) { /* 青木さん食べる */
            aoki      += dish[i].B;
        } else { /* 高橋くん食べる */
            takahashi += dish[i].A;
        }
    }

    printf("%"PRId64"\n", takahashi - aoki);
}
