#include <stdio.h>

int main (void)
{
    int a, b, i;
    int west, east;

    scanf("%d %d", &a, &b);

    west = east = 1;
    for (i = 2; i < 1000; ++i) {
        west = east;
        east += i;
        if (west < a) continue;
        if ((west - a) == (east - b)) {
            printf("%d\n", west - a);
            return 0;
        }
    }
}