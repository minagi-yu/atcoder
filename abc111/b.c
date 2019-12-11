#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main (int argc, char const *argv[])
{
    int64_t N;
    int64_t ans = 0;
    char str[4];

    scanf("%"PRId64, &N);

    while (sprintf(str, "%"PRId64, N), ((str[0] != str[1]) || (str[1] != str[2]))) {
        N++;
    }

    printf("%"PRId64"\n", N);
}
