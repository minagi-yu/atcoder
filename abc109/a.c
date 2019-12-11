#include <inttypes.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const* argv[])
{
    int64_t A, B;
    int64_t ans = 0;

    scanf("%" PRId64 "%" PRId64, &A, &B);

    if ((A % 2) && (B % 2)) {
        puts("Yes");
    } else {
        puts("No");
    }

    return 0;
}
