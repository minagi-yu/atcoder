#include <stdio.h>

int main(void) {
    int n, a, b;
    
    scanf("%d %d %d", &n, &a, &b);

    printf("%d\n", (n * a) < b ? (n * a) : b);
    
    return 0;
}