#include <stdio.h>
#include <stdlib.h>

int compare (const void *a, const void *b)
{
    if(*(int *)a - *(int *)b < 0)
        return -1;
    if(*(int *)a - *(int *)b > 0)
        return 1;
    return 0;
}

int main (int argc, char *argv[])
{
    int N, K, R[100];
    double rate = 0;

    scanf("%d %d", &N, &K);
    for (int i = 0; i < N; i++) {
        scanf("%d", &R[i]);
    }

    qsort(R, N, sizeof(int), compare);

    for (int i = (N - K); i < N; i++) {
        rate = (rate + R[i]) / 2;
    }

    printf("%.6f\n", rate);

    return 0;
}
