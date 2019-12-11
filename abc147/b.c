#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (void)
{
    char S[101];
    size_t len;
    intmax_t ans = 0;

    gets(S);
    len = strlen(S);


    for (size_t i = 0; i < (len / 2); i++) {
        if (S[i] != S[len - i - 1])
            ans++;
    }

    printf("%jd\n", ans);

    return 0;
}
