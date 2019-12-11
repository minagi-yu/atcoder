#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    int64_t N;
    char W[100][11];
    int64_t ans = 0;

    scanf("%"PRId64, &N);
    for (int i = 0; i < N; i++) {
        scanf("%s", W[i]);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (strcmp(W[i], W[j]) == 0) {
                puts("No");
                return 0;
            }
        }
    }

    for (int i = 0; i < (N - 1); i++) {
        size_t len;
        len = strlen(W[i]);
        if (W[i][len - 1] != W[i + 1][0]) {
            puts("No");
            return 0;
        }
    }

    puts("Yes");
    return 0;
}
