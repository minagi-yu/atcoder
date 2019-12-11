#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    char S[(int)1e5 + 1];
    uint64_t N;
    int64_t num0 = 0, num1 = 0, ans = 0;
    char *p;

    gets(S);
    N = strlen(S);
    p = S;

    while (*p) {
        if (*p == '0') {
            num0++;
        } else {
            num1++;
        }
        p++;
    }

    ans = num0 < num1 ? num0 : num1;
    ans *= 2;

    printf("%"PRId64"\n", ans);
}
