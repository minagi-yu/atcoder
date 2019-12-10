#include <stdio.h>
#include <stdint.h>

int main(void)
{
    intmax_t A, x, y;

    scanf("%jd", &A);

    x = A / 2;
    y = A - x;

    printf("%jd\n", x * y);

    return 0;
}
