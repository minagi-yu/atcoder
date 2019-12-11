#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main (int argc, char const *argv[])
{
    int64_t H, W, h, w;

    scanf("%"PRId64"%"PRId64, &H, &W);
    scanf("%"PRId64"%"PRId64, &h, &w);

    

    printf("%"PRId64"\n", (H - h) * (W - w));

    return 0;
}
