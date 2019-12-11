#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    int64_t N, Q;
    char S[(int)1e5 + 1];
    int64_t m[(int)1e5] = {0}, ans = 0;

    scanf("%"PRId64"%"PRId64, &N, &Q);
    scanf("%s", S);

    for (int i = 1; i < N; i++) {
        if ((S[i - 1] == 'A') && (S[i] == 'C')) {
            m[i] = m[i - 1] + 1;
        } else {
            m[i] = m[i - 1];
        }
    }

    for (int i = 0; i < Q; i++) {
        int64_t l, r;
        scanf("%"PRId64"%"PRId64, &l, &r);
        printf("%"PRId64"\n", m[r - 1] - m[l - 1]);
    }

    return 0;
}
