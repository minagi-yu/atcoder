#include <stdio.h>
#include <math.h>

int main (void)
{
    int n, m, d;

    double ans = 0, p, bunshi = 1, bunbo = 1, comb;
    int i;

    scanf("%d %d %d", &n, &m, &d);

    p = ((d != 0) ? ((n - d) * 2) : n) / (double)n / (double)n;

    ans += pow((double)p, (double)(m - 1)) * (m - 1);

    for (i = 1; i <= m - 2; i++) {
        bunshi *= (double)(m - i);
        bunbo *= (double)i;
        comb = bunshi / bunbo;
        ans += pow((double)p, (double)(m - 1 - i)) * pow((1.0 - (double)p), i) * comb * (m - 1 - i);
    }

    printf("%.10lf\n", ans);
}
