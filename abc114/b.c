#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    char S[11];
    size_t len;
    int x, ans = 999;

    gets(S);

    len = strlen(S);

    for (int i = 0; i < (len - 2); i++) {
        x = ((S[i] - '0') * 100) + ((S[i + 1] - '0') * 10) + (S[i + 2] - '0');
        if (abs(753 - x) < ans) ans = abs(753 - x);
    }

    printf("%d\n", ans);

    return 0;
}
