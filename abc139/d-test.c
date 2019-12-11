#include <stdio.h>

int num[110];
int frag[110];
void fx(int n, int k)
{
    int i, f, j;
    for (i = 0; i < n; ++i) {
        f = frag[i];
        if (f == 0) {
            frag[i] = 1;
            num[k] = i + 1;
            if (k == 1) {
                for (j = n; j > 0; --j)
                    printf("%4d", num[j]);
                printf("\n");
            } else {
                fx(n, k - 1);
            }
            frag[i] = 0;
        }
    }
}

int main()
{
    int i, k;
    scanf("%d", &k);
    for (i = 0; i < k; ++i) {
        num[i] = frag[i] = 0;
    }
    fx(k, k);
    return 0;
}