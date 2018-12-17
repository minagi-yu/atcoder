#include <stdio.h>
#include <string.h>

int main (void)
{
    char s[11];

    gets(s);

    if (strncmp(s, "MUJIN", 5)) puts("No");
    else puts("Yes");

    return 0;
}
