#include <stdio.h>

int main(void) {
    int n, a, fx;
    
    scanf("%d", &n);

    for (fx = 0, a = n; a > 0; a /= 10) {
        fx += a % 10;
    }

    puts((n % fx) == 0 ? "Yes" : "No");
    
    return 0;
}