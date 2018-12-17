#include <stdio.h>

int main (void)
{
    int a, b, c, x, y;
    int ac, bc, p = 0;

    scanf("%d %d %d %d %d", &a, &b, &c, &x, &y);

    if ((2 * c) < (a + b)) {
        if (x < y) {
            p = 2 * c * x;
            y -= x;
            x = 0;
            if ((2 * c) < b) {
                p += 2 * c * y;
            } else {
                p += b * y;
            }
        } else {
            p = 2 * c * y;
            x -= y;
            y = 0;
            if ((2 * c) < a) {
                p += 2 * c * x;
            } else {
                p += a * x;
            }
        }
    } else {
        p = a * x + b * y;
    }

    printf("%d\n", p);
}
