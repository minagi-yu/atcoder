#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    char S[16];
    int64_t len, win = 0;

    gets(S);
    len = strlen(S);

    for (int i = 0; i < strlen(S); i++) {
        if (S[i] == 'o') win++;
    }

    if ((15 - len + win) >= 8) {
        puts("YES");
    } else {
        puts("NO");
    }

    return 0;
}
