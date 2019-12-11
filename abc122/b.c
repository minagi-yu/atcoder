#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main (int argc, char const *argv[])
{
    char S[11];
    char *p;
    int64_t ans = 0, tmp = 0;

    gets(S);
    p = S;

    while (*p) {
        if ((*p == 'A') || (*p == 'C') || (*p == 'G') || (*p == 'T')) {
            tmp++;
        } else {
            tmp = 0;
        }
        if (tmp > ans) ans = tmp;
        p++;
    }

    printf("%"PRId64"\n", ans);
}
