#include <stdio.h>

int main (void)
{
    long long N, a;
    int i, odd = 0;

    scanf("%lld", &N);

    for (i = 0; i < N; i++) {
        scanf("%lld", &a);
        if (a % 2 != 0) odd++;
    }

    if (odd == 0) {
        puts("second");
    } else {
        puts("first");
    }
}
