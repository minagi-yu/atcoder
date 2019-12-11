#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>


int main (int argc, char const *argv[])
{
    int64_t A, B, T;

    scanf("%"PRId64"%"PRId64"%"PRId64, &A, &B, &T);
    
    printf("%"PRId64"\n", T / A * B);
}
