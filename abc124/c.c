#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    char S[(int)1e5 + 1];
    int64_t len, bw = 0, wb = 0;

    gets(S);
    len = strlen(S);
    
    for (int i = 0; i < len; i++) {
        if (i % 2) {
            if (S[i] == '0') {
                bw++;
            }
        } else {
            if (S[i] == '1') {
                bw++;
            }
        }
    }

    for (int i = 0; i < len; i++) {
        if (i % 2) {
            if (S[i] == '1') {
                wb++;
            }
        } else {
            if (S[i] == '0') {
                wb++;
            }
        }
    }

    printf("%"PRId64"\n", bw > wb ? wb : bw);
}
