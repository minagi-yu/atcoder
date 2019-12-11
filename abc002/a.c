#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main (int argc, char *argv[])
{
    uint64_t X, Y;

    scanf("%"PRIu64"%"PRIu64, &X, &Y);

    if (X > Y) {
        printf("%"PRIu64"\n", X);
    } else {
        printf("%"PRIu64"\n", Y);
    }

    return 0;
}
