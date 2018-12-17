#include <stdio.h>

int main (void)
{
    int n, m, k;
    int row, col;

    scanf("%d %d %d", &n, &m, &k);

    for (col = 0; col <= m; col++) {
        for ( row = 0; row <= n; row++) {
            if (n * col + (m - col) * row - col * row == k) {
                printf("Yes");
                return 0;
            }
        }
    }
    printf("No");
    return 0;
}
