#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    char S[5];

    gets(S);

    if (S[0] == S[1]) {
        puts("Bad");
        return 0;
    }
    if (S[1] == S[2]) {
        puts("Bad");
        return 0;
    }
    if (S[2] == S[3]) {
        puts("Bad");
        return 0;
    }

    puts("Good");

    return 0;
}
