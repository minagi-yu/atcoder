#include <stdio.h>

int main (void)
{
    long long N, H, W;

    scanf("%lld", &N);
    scanf("%lld", &H);
    scanf("%lld", &W);

    printf("%lld\n", (N - H + 1) * (N - W + 1));

    return 0;
}
