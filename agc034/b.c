#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    char s[200000];
    intmax_t a = 0, ans = 0;

    gets(s);

    int len = strlen(s);

    if (len < 3) {
        puts("0");
        return 0;
    }

    intmax_t i = 0;
    while (i <= (len - 3)) {
        fprintf(stderr, "%jd %jd %jd\n", a, i, ans);
        if (s[i] == 'A') {
            a++;
            if (s[i + 1] == 'B' && s[i + 2] == 'C') {
                s[i + 2] = 'A';
                ans += a;
                i += 3;
            } else {
                i++;
            }
        } else {
            a = 0;
            i++;
        }
    }

    printf("%jd\n", ans);
}
