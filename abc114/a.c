#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main (int argc, char const *argv[])
{
    int64_t X;

    scanf("%"PRId64, &X);

    if ((X == 7) || (X == 5) || (X == 3)) {
        puts("YES");
    } else {
        puts("NO");
    }

    return 0;
}
