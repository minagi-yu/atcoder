#include <stdio.h>

int main(void) {
    int n, i;
    int a[10];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        a[i] = a[i] % 2 ? 1 : 0;
    }

    for (i = 0; i < n; i++) {
        printf("%d", a[i]);
    }
    
    return 0;
}