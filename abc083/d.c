#include <stdio.h>
#include <stdint.h>

int main(void) {
    char str[16];
    int l[16];
    int i, j = 0, k;
    uint16_t s = 0;
    
    scanf("%s", str);

    for (i = 0; i < 16; i++) {
        l[i] = 0;
    }
    l[0] = 1;
    for (i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] != str[i]) {
            j += 1;
            l[j] += 1;
        } else {
            l[j] += 1;
        }
    }

    l[1]

    for (i = 0; i < j; i++) {
        
    }

    printf("%d\n", s);

    return 0;
}
