#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main (int argc, char const *argv[])
{
    int64_t N;
    char s[101];
    char *p;
    int64_t red = 0;

    scanf("%"PRId64, &N);
    scanf("%s", s);

    p = s;

    while (*p) {
        if (*p == 'R') red++;
        p++;
    }

    if ((red * 2) > N) {
        puts("Yes");
    } else {
        puts("No");
    }

    return 0;
}
