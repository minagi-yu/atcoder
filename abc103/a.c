#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int  tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main (void) {
    int a[3];

    scanf("%d %d %d", &a[0], &a[1], &a[2]);

    if (a[0] > a[1]) swap(&a[0], &a[1]);
    if (a[0] > a[2]) swap(&a[0], &a[2]);
    if (a[1] > a[2]) swap(&a[1], &a[2]);

    printf("%d\n", abs(a[2] - a[1]) + abs(a[1] - a[0]));

    return 0;
}
