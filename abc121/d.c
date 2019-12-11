#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

uint64_t f (uint64_t i)
{
    switch (i % 4) {
        case 0:
            return i;
            break;
        case 1:
            return 1;
            break;
        case 2:
            return 1 ^ i;
            break;
        case 3:
            return 0;
        default:
            return i;
            break;
    }
}

int main (int argc, char const *argv[])
{
    uint64_t A, B;

    scanf("%"PRIu64"%"PRIu64, &A, &B);

    printf("%"PRIu64"\n", f(A - 1) ^ f(B));

    return 0;
}
