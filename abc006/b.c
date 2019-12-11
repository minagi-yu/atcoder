#include <stdio.h>

int main (void)
{
    int n;
    int a0 = 0, a1 = 0, a2 = 1, a;

    scanf("%d", &n);

    if (n == 1) {
        puts("0");
        return 0;
    }
    if (n == 2) {
        puts("0");
        return 0;
    }
    if (n == 3) {
        puts("1");
        return 0;
    }

    for (int i = 3; i < n; i++) {
        a = (a0 + a1 + a2) % 10007;
        a0 = a1;
        a1 = a2;
        a2 = a;
    }

    printf("%d\n", a);
}
