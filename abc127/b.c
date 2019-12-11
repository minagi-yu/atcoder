#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main (int argc, char const *argv[])
{
    int64_t r, D, x[11];
    int64_t ans = 0;

    scanf("%"PRId64"%"PRId64"%"PRId64, &r, &D, &x[0]);

    for (int i = 1; i <=10 ; i++) {
        x[i] = r * x[i - 1] - D;
    }

    for (int i = 1; i <=10; i++) {
        printf("%"PRId64"\n", x[i]);
    }
}
