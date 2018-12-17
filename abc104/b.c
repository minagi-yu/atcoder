#include <stdio.h>
#include <string.h>

int main (void)
{
    char s[11];
    int i, len, c = 0;

    gets(s);

    if (s[0] != 'A') {
        puts("WA");
        return 0;
    }
    if (s[1] < 'a' || s[1] > 'z') {
        puts("WA");
        return 0;
    }

    len = strlen(s);
    for (i = 2; i < len -1; i++) {
        if (s[i] == 'C') c++;
        else if (s[i] < 'a' || s[i] > 'z') {
            puts("WA");
            return 0;
        }
    }
    if (c != 1) {
        puts("WA");
        return 0;
    }
    if (s[len - 1] < 'a' || s[len  - 1] > 'z') {
        puts("WA");
        return 0;
    }
    puts("AC");
    return 0;
}
