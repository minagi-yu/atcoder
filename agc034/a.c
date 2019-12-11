#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    intmax_t N, A, B, C, D;
    char S[200000 + 1];
    intmax_t ans = 0;

    scanf("%jd%jd%jd%jd%jd", &N, &A, &B, &C, &D);
    scanf("%s", S);

    A--;
    B--;
    C--;
    D--;

    // #が並んでいると飛び越えれない
    for (int i = A; i < (D - 1); i++) {
        if (S[i] == '#' && S[i + 1] == '#') {
            puts("No");
            return 0;
        }
    }

    // C < Dだと、ふぬけくんを先にゴールさせとけばいい
    if (C < D) {
        puts("Yes");
        return 0;
    }

    // C > Dだと、すぬけくんがふぬけくんを飛び越えられればいい
    for (int i = B; i <= D; i++) {
        if (S[i] == '#') continue;
        if (S[i - 1] == '.' && S[i + 1] == '.') {
            puts("Yes");
            return 0;
        }
    }

    puts("No");
    return 0;
}
