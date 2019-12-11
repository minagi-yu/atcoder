#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main (int argc, char const *argv[])
{
    int64_t A, B, C;

    scanf("%"PRId64"%"PRId64"%"PRId64, &A, &B, &C);

    if (A == B && B == C) {
        puts("Yes");
    } else {
        puts("No");
    }
    return 0;
}
