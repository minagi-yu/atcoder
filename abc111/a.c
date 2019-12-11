#include <stdio.h>

int main (void)
{
    char n[4];

    gets(n);

    n[0] ^= 0x08;
    n[1] ^= 0x08;
    n[2] ^= 0x08;

    puts(n);
}
