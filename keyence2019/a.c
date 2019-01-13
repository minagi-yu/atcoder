#include <stdio.h>
#include <stdint.h>

int main (void)
{
    int N1, N2, N3, N4;
    uint16_t flag = 0;

    scanf("%d %d %d %d", &N1, &N2, &N3, &N4);

    flag = (1 << N1) | (1 << N2) | (1 << N3) | (1 << N4);

    if (flag == ((1 << 1) | (1 << 9) | (1 << 7) | (1 << 4))) {
        puts("YES");
    } else {
        puts("NO");
    }
}
