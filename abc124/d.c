#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    int64_t N, K;
    char S[(int)1e5 + 1];
    int64_t len[(int)2e5] = {0}, tmp = 0, ans = 0;
    int64_t *p;

    scanf("%"PRId64"%"PRId64, &N, &K);
    scanf("%s", S);

    p = len;
    for (int i = 0; i < N; i++) {
        if (S[i] == S[i + 1]) {
            *p += 1;
        } else {
            *p += 1;
            p++;
        }
    }

    p = len;
    for (int i = 0; i < (K * 2); i++) {
        tmp += *p++;
        if (*p == 0) break;
    }
    if (S[0] == '1') tmp += *p;

    ans = tmp;

    fprintf(stderr, "%"PRId64"\n", tmp);

    if (S[0] == '1') {
        for (int i = 1; len[i] != 0; i++) {
            tmp -= len[i - 1];
            fprintf(stderr, "-%"PRId64, len[i - 1]);
            if ((i % 2) == 0) {
                tmp += len[i + K * 2 - 1];
                tmp += len[i + K * 2];
                fprintf(stderr, "+%"PRId64, len[i + K * 2 - 1]);
                fprintf(stderr, "+%"PRId64, len[i + K * 2]);
            }
            fprintf(stderr, " %"PRId64"\n", tmp);
            if (tmp > ans) ans = tmp;
        }
    } else {
        fprintf(stderr, "zero\n");
        for (int i = 1; len[i] != 0; i++) {
            tmp -= len[i - 1];
            fprintf(stderr, "-%"PRId64, len[i - 1]);
            if ((i % 2) == 1) {
                tmp += len[i + K * 2 - 1];
                tmp += len[i + K * 2];
                fprintf(stderr, "+%"PRId64, len[i + K * 2 - 1]);
                fprintf(stderr, "+%"PRId64, len[i + K * 2]);
            }
            fprintf(stderr, " %"PRId64"\n", tmp);
            if (tmp > ans) ans = tmp;
        }
    }

    printf("%"PRId64"\n", ans);
}
