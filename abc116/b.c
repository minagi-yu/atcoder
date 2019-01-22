#include <stdio.h>

int main(int argc, char *argv[])
{
    long long s, a[(int)1e6];
    int i, j;

    scanf("%lld", &s);

    a[0] = s;

    for (i = 1; i < (int)1e6; i++) {
        if (a[i - 1] % 2) {
            a[i] = 3 * a[i - 1]+ 1;
        } else {
            a[i] = a[i - 1] / 2;
        }
    }

    for (i = 1; i < (int)1e6; i++) {
        for (j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                printf("%d\n", i + 1);
                return 0;
            }
        }
    }

    return 0;
}
