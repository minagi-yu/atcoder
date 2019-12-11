#include <stdio.h>

int main (void)
{
    int a, b, c, d, e;
    int min = 10, time = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);

    if ((a % 10) && ((a % 10) < min)) min = a % 10;
    if ((b % 10) && ((b % 10) < min)) min = b % 10;
    if ((c % 10) && ((c % 10) < min)) min = c % 10;
    if ((d % 10) && ((d % 10) < min)) min = d % 10;
    if ((b % 10) && ((e % 10) < min)) min = e % 10;

    time += ((a + 9) / 10) * 10;
    time += ((b + 9) / 10) * 10;
    time += ((c + 9) / 10) * 10;
    time += ((d + 9) / 10) * 10;
    time += ((e + 9) / 10) * 10;

    printf("%d\n", time - 10 + min);
}
