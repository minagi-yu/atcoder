#include <stdio.h>

int main (void)
{
    char c[12];

    scanf("%s", &c[0]);
    scanf("%s", &c[4]);
    scanf("%s", &c[8]);

    putchar(c[0]);
    putchar(c[5]);
    putchar(c[10]);
    putchar('\n');
}
