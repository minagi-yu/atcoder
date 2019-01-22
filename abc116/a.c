#include <stdio.h>

int main(int argc, char *argv[])
{
    long long AB, BC, CA;

    scanf("%lld %lld %lld", &AB, &BC, &CA);

    printf("%lld\n", AB * BC / 2);

    return 0;
}
