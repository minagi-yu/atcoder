#include <stdio.h>
#include <string.h>

int main (void) {
    char s[101], t[101];
    int i = 0, len;

    gets(s);
    gets(t);

    len = strlen(s);

    while (t[i] != '\0') {
        if (s[0] == t[i] && memcmp(&s[0], &t[i], len - i) == 0 && memcmp(&s[len - i], &t[0], i) == 0) {
            puts("Yes");
            return 0;
        }
        i++;
    }
    puts("No");
    return 0;
}
