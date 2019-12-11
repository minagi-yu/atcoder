#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main (int argc, char const *argv[])
{
    int64_t A, B;
    int64_t ans = 0;

    scanf("%"PRId64"%"PRId64, &A, &B);

    if (A >= 13) {
        printf("%"PRId64"\n", B);
    } else if (A >= 6) {
        printf("%"PRId64"\n", B / 2);
    } else {
        puts("0");
    }
    
    return 0;
}
