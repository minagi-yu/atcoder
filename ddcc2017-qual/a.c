#include <stdio.h>

int main (void)
{
    char str[5];

    scanf("%s", str);

    if (str[0] == str[1] && str[1] != str[2] && str[2] == str[3]) {
        puts("Yes");
        return 0;
    }
    puts("No");
    return 0;
}