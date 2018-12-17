#include <stdio.h>
#include <math.h>

int main (void)
{
    int N, T, A, H[1000];
    int i, ans = 0;
    double temp;

    scanf("%d", &N);
    scanf("%d %d", &T, &A);

    for (i = 0; i < N; i++) {
         scanf("%d", &H[i]);
        if (fabs(A - (T - H[ans] * 0.006)) > fabs(A - (T - H[i] * 0.006))) ans = i;
    }

    printf("%d\n", ans + 1);
}
