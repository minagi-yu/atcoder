#include <stdio.h>

void build_sum_table(int *L, int *R);
int get_sum_range(int L, int R);

int N, M, Q;
int sum[500 + 1][500 + 1] = {0};

int main (void)
{
    int L[200000], R[200000], p[100000], q[100000];
    int i;

    scanf("%d %d %d", &N, &M, &Q);
    for (i = 0; i < M; i++) {
        scanf("%d %d", &L[i], &R[i]);
    }
    for (i = 0; i < Q; i++) {
        scanf("%d %d", &p[i], &q[i]);
    }

    build_sum_table(L, R);

    for (i = 0; i < Q; i++) {
        printf("%d\n", get_sum_range(p[i], q[i]));
    }
}

void build_sum_table(int *L, int *R)
{
    int i, j;

    for (i = 0; i < M; i++) {
        sum[L[i]][R[i]]++;
    }

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N; j++) {
            sum[i][j] += sum[i - 1][j];
            sum[i][j] += sum[i][j - 1];
            sum[i][j] -= sum[i - 1][j - 1];
        }
    }
}

int get_sum_range(int L, int R)
{
    int ans = sum[R][R] - sum[R][L - 1] - sum[L - 1][R] + sum[L - 1][L - 1];
    return ans;
}
