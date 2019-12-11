#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const* argv[])
{
    char S[(int)2e5 + 1], T[(int)2e5 + 1];
    char c['z' - 'a' + 1] = { 0 }, r['z' - 'a' + 1] = { 0 };
    size_t len;

    gets(S);
    gets(T);

    len = strlen(S);

    for (size_t i = 0; i < len; i++) {
        if (c[S[i] - 'a'] != 0 || r[T[i] - 'a'] != 0) {
            if ((c[S[i] - 'a']) != T[i]) {
                puts("No");
                return 0;
            }
            if ((r[T[i] - 'a']) != S[i]) {
                puts("No");
                return 0;
            }
        } else {
            c[S[i] - 'a'] = T[i];
            r[T[i] - 'a'] = S[i];
        }
    }

    puts("Yes");
    return 0;
}
