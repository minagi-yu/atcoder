#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num;
    int p;
    long long y;
    char id[13];
} city_t;

int compare_num(const void *a, const void *b)
{
    return ((city_t*)a)->num - ((city_t*)b)->num;
}

int compare_p(const void *a, const void *b)
{
    return ((city_t*)a)->p - ((city_t*)b)->p;
}

int compare_y(const void *a, const void *b)
{
    if (((city_t*)a)->y - ((city_t*)b)->y < 0)
        return -1;
    if (((city_t*)a)->y - ((city_t*)b)->y > 0)
        return 1;
    return 0;
}

int main (void)
{
    int N, M;
    city_t city[(int)1e5];
    int i, start = 0, end = 0, x = 1;

    scanf("%d %d", &N, &M);

    for (i = 0; i < M; i++) {
        city[i].num = i;
        scanf("%d %lld", &city[i].p, &city[i].y);
    }

    qsort(city, M, sizeof(city_t), compare_p);

    while (start < M) {
        for (end = start; end < M; end++) {
            if (city[end].p != city[end + 1].p) break;
        }
        qsort(&city[start], end - start + 1, sizeof(city_t), compare_y);
        start = end + 1;
    }

    for (i = 0; i < M; i++) {
        sprintf((char*)&city[i].id, "%06d%06d", city[i].p, x++);
        if (city[i].p != city[i + 1].p) x = 1;
    }

    qsort(city, M, sizeof(city_t), compare_num);

    for (i = 0; i < M; i++) {
        puts(city[i].id);
    }
}
