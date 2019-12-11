#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (void)
{
    intmax_t N;
    intmax_t ans = 0;

    scanf("%jd", &N);

    for (intmax_t ans = 0; ans < 50000; ans++) {
        if (((ans * 108) / 100) == N) {
            printf("%jd\n", ans);
            return 0;
        }
    }
    
    puts(":(");

    return 0;
}
