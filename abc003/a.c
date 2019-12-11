#include <stdio.h>

int main (int argc, char *argv[])
{
    int N;
    double x = 0.0;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        x += 10000.0 * i / N;
    }

    printf("%f\n", x);

    return 0;
}
