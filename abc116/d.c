#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    long long t;
    long long d;
    bool selected;
} sushi_t;

int compd (const void *a, const void *b)
{
    if (((sushi_t*)a)->d - ((sushi_t*)b)->d < 0)
        return 1;
    if (((sushi_t*)a)->d - ((sushi_t*)b)->d > 0)
        return -1;
    return 0;
}

int compt (const void *a, const void *b)
{
    if (((sushi_t*)a)->t - ((sushi_t*)b)->t < 0)
        return 1;
    if (((sushi_t*)a)->t - ((sushi_t*)b)->t > 0)
        return -1;
    return 0;
}

long long getmanzoku (sushi_t *s, bool *t, long long n)
{
    long long i;
    long long countt = 0;
    long long sumd = 0;
    for (i = 0; i < n; i++) {
        if (t[i] == true) countt++;
        if (s[i].selected == true) sumd += s[i].d;
    }
    return (sumd + countt * countt);
}

int main(int argc, char *argv[])
{
    long long K, N;
    sushi_t sushi[(int)1e5];
    bool t[(int)1e5] = {false};
    long long i, sel = 0, j;
    long long old = 0, new = 0;

    scanf("%lld %lld", &N, &K);
    for (i = 0; i < N; i++) {
        scanf("%lld %lld", &sushi[i].t, &sushi[i].d);
        sushi[i].selected = 0;
    }

    qsort(sushi, N, sizeof(sushi_t), compd);
    
    for (i = 0; i < N; i++) {
        if (t[sushi[i].t] == 0) {
            t[sushi[i].t] = true;
            sushi[i].selected = true;
            sel++;
        }
        if (sel == K) break;
    }
    for (i = 0; i < N; i++) {
        if (sel == K) break;
        if (sushi[i].selected == false) {
            sushi[i].selected = true;
            sel++;
        }
    }

    old = new = getmanzoku(sushi, t, N);

    for (;;) {
        for (j = N; j > 0; j++) {
            if (sushi[i].selected == false) continue;
        }
        sushi[j].selected = false;
        t[sushi[j].t] = false;

        for (i = 0; i < N; i++) {
            if (sushi[i].selected == true) continue;
        }
        sushi[i].selected = true;
        t[sushi[i].t] = true;

        new = getmanzoku(sushi, t, N);
        if (old >= new) break;
    }

    printf("%lld", old);

    for (i = 0; i < N; i++) {
        printf("%lld %lld %d\n", sushi[i].t, sushi[i].d, sushi[i].selected);
    }

    return 0;
}
