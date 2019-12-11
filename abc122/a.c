#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main (int argc, char const *argv[])
{
    char b[2];

    gets(b);

    switch (b[0])
    {
        case 'A':
            puts("T");
            break;
        case 'C':
            puts("G");
            break;
        case 'G':
            puts("C");
            break;
        case 'T':
            puts("A");
            break;
        default:
            break;
    }

    return 0;
}
