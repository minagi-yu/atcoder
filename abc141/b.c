#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (void)
{
    char S[101];

    gets(S);

    for (size_t i = 0; i < strlen(S); i++) {
        if ((i % 2) && (S[i] == 'R')) {
            puts("No");
            return 0;
        }
        if (((i % 2) == 0) && (S[i] == 'L')) {
            puts("No");
            return 0;
        }
    }

    puts("Yes");

    return 0;
}
