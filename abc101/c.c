#include <stdio.h>

int main (void)
{
    int n, k;
    int a[100000];
    int pos1, ans, r, l;

    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] == 1) pos1 = i;
    }

    r = (n - pos1 - 1) / (k - 1);
    l = pos1 / (k - 1);

    ans = l + r;

    if((l ? l * (k - 1) + 1 : 0) + (r ? r * (k - 1) + 1 : 0) < n + 1 && pos1 != 0 && pos1 != n) ans += 1;

    printf("%d\n", ans);
}
