#include <stdio.h>

int main (void)
{
    char s[1001];
    int w, i = 0;

    gets(s);
    scanf("%d", &w);

    while (s[i]) {
        if (i % w == 0) putchar(s[i]);
        i++;
    }
    putchar('\n');
}
