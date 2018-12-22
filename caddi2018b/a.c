#include <stdio.h>

int main (void)
{
    char N[5];
    char *p = N;
    int ans = 0;

    gets(N);

    while (*p) {
        if (*p++ == '2') ans++;
    }

    printf("%d\n", ans);
}
