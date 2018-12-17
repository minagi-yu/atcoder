#include <stdio.h>

int main(int argc, char *argv[])
{
    char S[(int)(2e5 + 1)];
    long long wnum = 0, i, ans = 0;

    gets(S);

    for (i = 0; S[i]; i++) {
        if (S[i] == 'W') {
            ans += i - wnum;
            wnum++;
        }
    }

    printf("%lld\n", ans);

    return 0;
}
