#include <stdio.h>

int main (void)
{
    char s[4];
    int p = 700;

    scanf("%s", s);

    if (s[0] == 'o') p += 100;
    if (s[1] == 'o') p += 100;
    if (s[2] == 'o') p += 100;

    printf("%d\n", p);
}
