#include <stdio.h>

int main (void) {
    int r, g, p;

    scanf("%d", &r);
    scanf("%d", &g);

    p = g * 2 - r;

    printf("%d\n", p);

    return 0;
}