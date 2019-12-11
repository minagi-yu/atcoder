#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

struct _node {
    int64_t idx;
    int64_t numofedge;
    int64_t c;
} node[10000] = {{0, 0, 0}};

int cmpint (const void *a, const void *b)
{
    if(*(int64_t *)a - *(int64_t *)b < 0)
        return -1;
    if(*(int64_t *)a - *(int64_t *)b > 0)
        return 1;
    return 0;
}

int cmpedge (const void *a, const void *b)
{
    if(((struct _node *)a)->numofedge - ((struct _node *)b)->numofedge < 0)
        return -1;
    if(((struct _node *)a)->numofedge - ((struct _node *)b)->numofedge > 0)
        return 1;
    return 0;
}

int cmpidx (const void *a, const void *b)
{
    if(((struct _node *)a)->idx - ((struct _node *)b)->idx < 0)
        return -1;
    if(((struct _node *)a)->idx - ((struct _node *)b)->idx > 0)
        return 1;
    return 0;
}

int main (int argc, char const *argv[])
{
    int64_t N, a[10000], b[10000], c[10000];
    int64_t ans = 0;

    scanf("%"PRId64, &N);
    for (int i = 0; i < (N - 1); i++) {
        scanf("%"PRId64"%"PRId64, &a[i], &b[i]);
        node[i].idx = i;
        node[a[i]].numofedge++;
        node[b[i]].numofedge++;
    }
    for (int i = 0; i < N; i++) {
        scanf("%"PRId64, &c[i]);
    }

    qsort(c, N, sizeof(int64_t), cmpint);

    qsort(node, N, sizeof(struct _node), cmpedge);

    for (int i = 0; i < N; i++) {
        node[i].c = c[i];
    }

    qsort(node, N, sizeof(struct _node), cmpidx);

    for (int i = 0; i < N; i++) {
        ans += node[a[i]].c > node[b[i]].c ? node[b[i]].c : node[a[i]].c;
    }

    printf("%"PRId64"\n", ans);
    for (int i = 0; i < (N - 1); i++) {
        printf("%"PRId64" ", node[i].c);
    }
    printf("%"PRId64"\n", node[N - 1].c);
}
