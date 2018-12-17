#include <stdio.h>

int main (void)
{
    int n, a, b;

    scanf("%d", &n);

    if (n == 1) {
        puts("Hello World");
    } else {
        scanf("%d", &a);
        scanf("%d", &b);
        printf("%d\n", a + b);
    }

    return 0;
}