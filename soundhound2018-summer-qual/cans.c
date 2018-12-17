#include <stdio.h>

int main(void) {
    double n, m, d;
    scanf("%lf %lf %lf", &n, &m, &d);
    double res = (n - d) * (m - 1) / (n * n);
    if(d != 0)
        res = res * 2.0;
    printf("%.10lf\n", res);
    return 0;
}