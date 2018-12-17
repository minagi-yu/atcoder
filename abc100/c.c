#include <stdio.h>

int main (void)
{
    int n, a[10000];
    int i, ans = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    i = 0;
    while (i < n) {
        if (a[i] % 2) {
            i++;
            continue;
        }
        a[i] /= 2;
        ans++;
        i = 0;
    }
    printf("%d\n", ans);
}
