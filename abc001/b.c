#include <stdio.h>

int main(void) {
    int m;
    
    scanf("%d", &m);

    if (m < 100) {
        puts("00");
    } else if (m <= 5000) {
        printf("%02d\n", m / 100);
    } else if (m <= 30000) {
        printf("%02d\n", m / 1000 + 50);
    } else if (m <= 70000) {
        printf("%02d\n", (m / 1000 - 30) / 5 + 80);
    } else {
        puts("89");
    }
    
    return 0;
}