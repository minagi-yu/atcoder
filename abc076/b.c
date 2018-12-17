#include <stdio.h>

int main(void) {
    int n, k, i, x = 1;

    scanf("%d", &n);
    scanf("%d", &k);

    for (i = 0; i < n; i++) {
        if (x < k) {
            x *= 2;
        } else {
            x += k;
        }
    }

    printf("%d\n", x);
    
    return 0;
}