#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main (void)
{
    int64_t N, M;
    int64_t adult = 0, old = 0, baby = 0;;

    scanf("%"PRIi64"%"PRIi64, &N, &M);

    if (M % 2) {
        M -= 3;
        N--;
        old++; 
    }

    baby = (M / 2) - N;
    adult = N - baby;

    if ((adult < 0) || (old < 0) || (baby < 0)) {
        adult = old = baby = -1;
    }

    printf("%"PRIi64" %"PRIi64" %"PRIi64"\n", adult, old, baby);

    return 0;
}
