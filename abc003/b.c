#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
    char S[11], T[11];
    char *s, *t;

    gets(S);
    gets(T);

    s = S;
    t = T;

    while (*s) {
        if (*s == '@') { 
            if ((*t == '@') || (*t == 'a') || (*t == 't') || (*t == 'c') || (*t == 'o') || (*t == 'd') || (*t == 'e') || (*t == 'r')) *s = *t;
        } else if (*t == '@') {
            if ((*s == 'a') || (*s == 't') || (*s == 'c') || (*s == 'o') || (*s == 'd') || (*s == 'e') || (*s == 'r')) *t = *s;
        }
        if (*s != *t) {
            puts("You will lose");
            return 0;
        }
        s++;t++;
    }
    puts("You can win");

    return 0;
}
