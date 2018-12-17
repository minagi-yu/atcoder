#include <stdio.h>
#include <string.h>

int main (void) {
    int n, m, i, j, tmp = 0, x = 0;
    char s[100][11], t[100][11];

    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%s", s[i]);
    }
    scanf("%d", &m);
    for (i = 0; i < m; ++i) {
        scanf("%s", t[i]);
    }

    for (i = 0; i < n; ++i) {
        tmp = 0;
        for (j = 0; j < n; ++j) {
            if(strcmp(s[i], s[j]) == 0) {
                tmp++;
            }
        }
        for (j = 0; j < m; ++j) {
            if (strcmp(s[i], t[j]) == 0) {
                tmp--;
            }
        }
        if (tmp > x) x = tmp;
    }

    printf("%d\n", x);
}
