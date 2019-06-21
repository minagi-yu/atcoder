#include <stdio.h>

int main (void)
{
    int h, w, t, i, j;
    char s[51][51];

    scanf("%d %d", &h, &w);

    for (i = 0; i < h; i++) {
        scanf("%s", &s[i][0]);
    }

    for (i = 0; i < h; i++) {
        for (j = 0; j < w; j++) {
            t = 0;

            if (s[i][j] == '#') continue;

            if ((i - 1) >= 0) {
                if ((j - 1) >= 0) {
                    if (s[i - 1][j - 1] == '#') {
                        t += 1;
                    }
                }
                if (s[i - 1][j] == '#') {
                    t += 1;
                }
                if ((j + 1) < w) {
                    if (s[i - 1][j + 1] == '#') {
                        t += 1;
                    }
                }
            }

            if ((j - 1) >= 0) {
                if (s[i][j - 1] == '#') {
                    t += 1;
                }
            }
            if ((j + 1) < w) {
                if (s[i][j + 1] == '#') {
                    t += 1;
                }
            }

            if ((i + 1) < h) {
                if ((j - 1) >= 0) {
                    if (s[i + 1][j - 1] == '#') {
                        t += 1;
                    }
                }
                if (s[i + 1][j] == '#') {
                    t += 1;
                }
                if ((j + 1) < w) {
                    if (s[i + 1][j + 1] == '#') {
                        t += 1;
                    }
                }
            }

            s[i][j] = t + '0';
        }
    }

    for (i = 0; i < h; i++) {
        puts(&s[i][0]);
    }

    return 0;
}
