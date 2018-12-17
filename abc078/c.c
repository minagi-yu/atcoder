#include <stdio.h>
#include <math.h>

int main(void) {
    unsigned int n, m, i;
    double x = 0, t, p;
    
    scanf("%u %u", &n, &m);

    t = (n - m) * 100 + 1900 * m;
    p = pow(0.5, m);

    for (i = 1; i < 1000000; i++) {
        x += t * i * pow(1 - p, i - 1) * p;
    }

    printf("%u\n", (unsigned int)(x + 0.5));
    
    return 0;
}
