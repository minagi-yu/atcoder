#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (void)
{
    char S[4], T[4];
    intmax_t ans = 0;

    gets(S);
    gets(T);

    if (S[0] == T[0]) ans++;
    if (S[1] == T[1]) ans++;
    if (S[2] == T[2]) ans++;

    printf("%jd\n", ans);

    return 0;
}
