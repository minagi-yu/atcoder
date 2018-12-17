#include <stdio.h>

int main(int argc, char *argv[])
{
    char S[(int)(2e5 + 1)];
    long long b = 0, ans = 0;
    char *s = S;

    gets(S);

    do {
        if (*s == 'B') b++;
        else ans += b;
    } while (*(++s));

    printf("%lld\n", ans);

    return 0;
}
