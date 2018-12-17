#include <stdio.h>
#include <string.h>

int main (void)
{
    char a[6], b[6];
    char c[6];
    int x = 0;
    char i, j, k;

    scanf("%s %s", a, b);

    c[5] = '\0';

    for (i = '1'; i <= '9'; i++) {
        for (j = '0'; j <= '9'; j++) {
            for (k = '0'; k <= '9'; k++) {
                c[0] = i; c[1] = j; c[2] = k; c[3] = j; c[4] = i;
                if (strcmp(a, c) <= 0 && strcmp(b, c) >= 0) x++;
            }
        }
    }

    printf("%d\n", x);
}
