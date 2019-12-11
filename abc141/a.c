#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (void)
{
    char S[7];

    gets(S);

    if (strcmp(S, "Sunny") == 0) puts("Cloudy");
    else if(strcmp(S, "Cloudy") == 0) puts("Rainy");
    else if (strcmp(S, "Rainy") == 0) puts("Sunny");

    return 0;
}
