#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>

int64_t parent[(int)1e5];

int64_t root (int64_t a)
{
    if (parent[a] < 0) return a;
    return parent[a] = root(parent[a]);
}

int64_t size (int64_t a)
{
    return -parent[root(a)];
}

int64_t connect (int64_t a, int64_t b)
{
    a = root(a);
    b = root(b);

    if (a == b) return 0;

    if (size(a) < size(b)) {
        a ^= b;
        b ^= a;
        a ^= b;
    }

    parent[a] += parent[b];
    parent[b] = a;

    return 1;
}

int64_t color[(int)1e5];

void search (uint64_t u)
{
    
}

int main (int argc, char const *argv[])
{
    int64_t N, u[(int)1e5], v[(int)1e5], w[(int)1e5];
    int64_t ans = 0;

    scanf("%"PRId64, &N);
    for (int i = 0; i < N; i++) {
        scanf("%"PRId64"%"PRId64"%"PRId64, &u[i], &v[i], &w[i]);
    }

    for (int i = 0; i < N; i++) {
        if (root(u[i]) != root(v[i])) {

        }
    }
    

    printf("%"PRId64"\n", ans);
}
