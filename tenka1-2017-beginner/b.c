#include <stdio.h>

int main (void)
{
    unsigned int n, i;
    unsigned long a, b, a_top, a_last, b_top, b_last;

    scanf("%u", &n);

    scanf("%lu", &a);
    scanf("%lu", &b);

    a_top = a_last = a;
    b_top = b_last = b;

    for (i = 1; i < n; i++) {
        scanf("%lu", &a);
        scanf("%lu", &b);
        if (a < a_top) {
            a_top = a;
            b_top = b;
        } else if (a > a_last) {
            a_last = a;
            b_last = b;
        }
    }

    printf("%d\n", a_top + (a_last - a_top) + b_last);
}
