#include <stdio.h>

int main (void)
{
    int H, W;
    char a[101][101];
    int i, j, delh[100] = {0}, delw[100] = {0};

    scanf("%d %d", &H, &W);

    for (i = 0; i < H; i++) {
        scanf("%s", &a[i][0]);
    }

    for (i = 0; i < H; i++) {
        for (j = 0; j < W; j++) {
            if (a[i][j] == '#') delh[i] = 1;
        }
    }
    for (i = 0; i < W; i++) {
        for (j = 0; j < H; j++) {
            if (a[j][i] == '#') delw[i] = 1;
        }
    }
    for (i = 0; i < H; i++) {
        for (j = 0; j < W; j++) {
            if (delh[i] == 1 && delw[j] == 1)
                putchar(a[i][j]);
        }
        if (delh[i] == 1) puts("");
    }

    return 0;
}
