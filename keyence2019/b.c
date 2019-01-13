#include <stdio.h>
#include <string.h>

int main (void)
{
    char S[101];
    int i, len, s = 0, e = 0;

    gets(S);

    if (strstr(S, "keyence") != NULL) {
        puts("YES");
        return 0;
    }

    len = strlen(S);
    if (S[0] == 'k') {
        s = 1;
        if (S[1] == 'e') {
            s = 2;
            if (S[2] == 'y') {
                s = 3;
                if (S[3] == 'e') {
                    s = 4;
                    if (S[4] == 'n') {
                        s = 5;
                        if (S[5] == 'c') {
                            s = 6;
                            if (S[6] == 'e') s = 7;
                        }
                    }
                }
            }
        }
    }
    

    if (S[len - 1] == 'e') {
        e = 1;
        if (S[len - 2] == 'c') {
            e = 2;
            if (S[len - 3] == 'n') {
                e = 3;
                if (S[len - 4] == 'e') {
                    e = 4;
                    if (S[len - 5] == 'y') {
                        e = 5;
                        if (S[len - 6] == 'e') {
                            e = 6;
                            if (S[len - 7] == 'k') e = 7;
                        }
                    }
                }
            }
        }
    }

    printf("%d %d\n", s, e);
    if (s + e >= 7) {
        puts("YES");
        return 0;
    }

    puts("NO");
    return 0;
}
