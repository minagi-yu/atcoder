#include <stdio.h>

int main (void)
{
    int a, b, c, d, e, k;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    scanf("%d", &k);

    if (e - a > k) {
        puts(":(");
        return 0;
    }
    puts("Yay!");
}
