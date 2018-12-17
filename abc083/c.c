#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint64_t x, y, d;
    int len = 0;
    
    scanf("%llu %llu", &x, &y);

    d = y / x;

    while (d >= 1) {
        len += 1;
        d >>= 1;
    }

    printf("%d\n", len);
    
    return 0;
}
