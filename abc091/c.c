#include <stdio.h>
#include <stdlib.h>

int compare (const void *p, const void *q) {
    return *(int*)p - *(int*)q;
}

int compare2 (const void *p, const void *q) {
    return *((int*)q + 1) - *((int*)p + 1);
}

int main (void) {
    int n, red[100][2], blue[100][2], i, j, x = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %d", &red[i][0], &red[i][1]);
    }
    for (i = 0; i < n; i++) {
        scanf("%d %d", &blue[i][0], &blue[i][1]);
    }

    qsort(red, n, sizeof(int) * 2, compare2);
    qsort(blue, n, sizeof(int) * 2, compare);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (red[i][0] < blue[j][0] && red[i][1] < blue[j][1]) {
                x++;
                blue[j][0] = -1;
                break;
            }
        }
    }

    printf("%d\n", x);
}
