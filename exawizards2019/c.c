#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    int64_t N, Q, t[(int)2e5], d[(int)2e5];
    char s[(int)2e5 + 1];
    char *p;
    int64_t num[26] = {0}, l[26] = {0}, r[26] = {0};
    int64_t ans = 0;

    scanf("%"PRId64"%"PRId64, &N, &Q);
    scanf("%s", s);

    p = s;
    while (*p) {
        num[*p - 'A']++;
        *p++;
    }

    for (int i = 0; i < Q; i++) {
        scanf("%"PRId64"%"PRId64, &t[i], &d[i]);
        if (d[i] == 'L') {
            l[t[i] - 'A']++;
        } else {
            r[t[i] - 'A']++;
        }
    }
    
    for (int i = 0; i < 26; i++) {
        for (j = 0; j < )
    }

    printf("%"PRId64"\n", ans);
}
