#include <stdio.h>

int main (void)
{
    int N;
    int i, x = 0;

    scanf("%d", &N);
    if (N % 2) {
        x = N - 2;
        for (i = 0; i < N / 2 - 1; i++) {
            x += (N - ((i + 2) * 2)) * 2;
        } 
    } else {
        for (i = 0; i < N / 2 - 1; i++) {
            x += (N - ((i + 1) * 2)) * 2;
        }
    }

    printf("%d\n", x);
}
