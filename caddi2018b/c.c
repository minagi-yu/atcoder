#include <stdio.h>
#include <math.h>

int main (void)
{
    long long N, P;
    long long ans;

    scanf("%lld %lld", &N, &P);

    ans = (long long)powl((long double)P, 1 / (long double)N);

    for (;;) {
        if (P % (long long)powl((long double)ans, (long double)N) == 0) {
            printf("%lld\n", ans);
            return 0;
        }
        ans--;
    }
}
