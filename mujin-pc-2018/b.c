#include <stdio.h>

int main (void)
{
    int a;
    char s[101];
    char *p;

    scanf("%d", &a);
    scanf("%s", s);

    if (a == 0) {
        puts("Yes");
        return 0;
    }

    p = s;
    while (*p) {
        a += (*p++ == '+') ? 1 : -1;
        if (a == 0) {
            puts("Yes");
            return 0;
        }
    }
    puts("No");
    return 0;
}
