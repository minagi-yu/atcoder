#include <stdio.h>
#include <math.h>

int main(void) {
    unsigned int n, m, i;
    double x, y;
    
    scanf("%d %d", &n, &m);

    for (i = 1; i < 100; i++) {
        // y = ((n - m) * 100 + 1900 * m) * i * pow(0.5, m + i - 1);
        // x += y;
        x += ((n - m) * 100 + 1900 * m) * i * pow(0.5, m + i - 1);
        printf("%d\n", (int)y);
    }

    printf("%d\n", (unsigned int)x);
    
    return 0;
}
