#include <stdio.h>

int main (void)
{
    int N, M, Q;
    int L[200000], R[200000], p[100000], q[100000];
    int i;

    scanf("%d %d %d", &N, &M, &Q);
    for (i = 0; i < M; i++) {
        scanf("%d %d", &L[i], &R[i]);
    }
    for (i = 0; i < Q; i++) {
        scanf("%d %d", &p[i], &q[i]);
    }
}