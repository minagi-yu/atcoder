#include <stdio.h>

int main (void)
{
    char c;
    int i, q = 0;

    for (i = 0; i< 6; i++) {
        scanf("%c", &c);
        if (c == '1') {
            q++;
        }
    }
    scanf("%*s");

    printf("%d\n", q);
}
