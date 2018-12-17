#include <stdio.h>

int main (void)
{
    int i = 0;
    char s[5];
    char *si;

    si = s;

    gets(s);

    while(*si){
        if (*si == '+') i++;
        if (*si == '-') i--;
        si++;
    }

    printf("%d\n", i);
}
