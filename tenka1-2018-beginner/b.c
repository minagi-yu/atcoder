#include <stdio.h>

int main (void)
{
    int A, B, K;
    int i;

    scanf("%d %d %d", &A, &B, &K);

    for (i = 0; i < K; i++) {
        if (i % 2 == 0) {
            if (A % 2 == 1) A -= 1;
            B += A / 2;
            A /= 2;
        } else {
            if (B % 2 == 1) B -= 1;
            A += B / 2;
            B /= 2;
        }
    }

    printf("%d %d\n", A, B);

    return 0;
}
