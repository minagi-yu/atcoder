#include <stdio.h>
#include <math.h>

const long long gosencho = 5000000000000000;

int main (void)
{
    char s[101];
    char *p = s;
    long long k;
    double digit = 0;

    scanf("%s", s);
    scanf("%lld", &k);

    while (*p) {
        digit += pow((double)(*p - '0'), (double)gosencho);
        if (digit >= k) {
            putchar(*p);
            puts("");
            return 0;
        }
        ++p;
    }

    return 0;
}
