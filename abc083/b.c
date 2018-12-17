#include <stdio.h>

int main(void) {
    int n, a, b, i, j, sum, x = 0;
    
    scanf("%d %d %d", &n, &a, &b);

    for (i = 1; i <= n; i++) {
        j = i;
        sum = 0;
        do {
            sum += j % 10;
            j /= 10;
        } while (j > 0);
        if (a <= sum && sum <= b) {
            x += i;
        }
    }

    printf("%d\n", x);
    
    return 0;
}
