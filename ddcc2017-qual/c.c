#include <stdio.h>
#include <stdlib.h>

int compare_uint(const void *a, const void *b) {
    return *(unsigned int *)b - *(unsigned int *)a;
}

int main(void) {
    unsigned int n, c, x, i;
    unsigned int l[100000];

    scanf("%d %d", &n, &c);

    for (i = 0; i < n; i++) {
        scanf("%d", &l[i]);
    }

    qsort(l, n, sizeof(unsigned int), compare_uint);

    for (i = 0; i < n; i++) {
        if (l[i] + l[n - 1] >= c) {
            x += 1;
        } else {
            x += 1;
            n -= 1;
        }
    }

    printf("%d\n", x);

    return 0;
}