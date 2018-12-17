#include <stdio.h>
#include <string.h>

int main (void)
{
    char S[4];
    int i;

    gets(S);

    if (strlen(S) == 2) {
        puts(S);
    } else {
        putchar(S[2]);
        putchar(S[1]);
        putchar(S[0]);
        puts("");
    }

    return 0;
}
