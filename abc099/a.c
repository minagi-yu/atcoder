#include <stdio.h>

int main (void)
{
    int n;

    scanf("%d", &n);

    if (n < 1000) 
        puts("ABC");
    else
        puts("ABD");
}