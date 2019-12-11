#include <stdio.h>

int main (void)
{
    long long H, W;
    char s[402][402] = {0};
    long long g[402][402] = {0};
    long long pn[400 * 400][2] = {0};
    long long i, j, p = 1, ans = 0;


    scanf("%lld %lld", &H, &W);
    for (i = 0; i < H; i++) {
        scanf("%s", &s[i + 1][1]);
    }

    for (i = 1; i <= H; i++) {
        for (j = 1; j <= W; j++) {
            if (g[i][j] == 0) {
                if (s[i][j] == '#') {
                    if (s[i - 1][j] == '.') {
                        g[i][j] = p;
                        g[(i - 1)][j] = p;
                    }
                    if (s[i + 1][j] == '.') {
                        g[i][j] = p;
                        g[(i + 1)][j] = p;
                    }
                    if (s[i][j - 1] == '.') {
                        g[i][j] = p;
                        g[i][(j - 1)] = p;
                    }
                    if (s[i][j + 1] == '.') {
                        g[i][j] = p;
                        g[i][(j + 1)] = p;
                    }
                } else {
                    if (s[i - 1][j] == '#') {
                        g[i][j] = p;
                        g[(i - 1)][j] = p;
                    }
                    if (s[i + 1][j] == '#') {
                        g[i][j] = p;
                        g[(i + 1)][j] = p;
                    }
                    if (s[i][j - 1] == '#') {
                        g[i][j] = p;
                        g[i][(j - 1)] = p;
                    }
                    if (s[i][j + 1] == '#') {
                        g[i][j] = p;
                        g[i][(j + 1)] = p;
                    }
                }
            }

            if (s[i][j] == '#') {
                if (s[i - 1][j] == '.') {
                    g[(i - 1)][j] = g[i][j];
                }
                if (s[i + 1][j] == '.') {
                    g[(i + 1)][j] = g[i][j];
                }
                if (s[i][j - 1] == '.') {
                    g[i][(j - 1)] = g[i][j];
                }
                if (s[i][j + 1] == '.') {
                    g[i][(j + 1)] = g[i][j];
                }
            } else {
                if (s[i - 1][j] == '#') {
                    g[(i - 1)][j] = g[i][j];
                }
                if (s[i + 1][j] == '#') {
                    g[(i + 1)][j] = g[i][j];
                }
                if (s[i][j - 1] == '#') {
                    g[i][(j - 1)] = g[i][j];
                }
                if (s[i][j + 1] == '#') {
                    g[i][(j + 1)] = g[i][j];
                }
            }

        }
    }

    for (i = 1; i <= H; i++) {
        for (j = 1; j <= W; j++) {
            if(g[i][j] == 0) continue;
            if (s[i][j] == '#') pn[(g[i][j])][0]++;
            else pn[(g[i][j])][1]++;
        }
    }
    
    // for (i = 1; i <= H; i++) {
    //     for (j = 1; j <= W; j++) {
    //         printf("%lld", g[i][j]);
    //     }
    //     puts("");
    // }
    // for (i = 0; i < 400*400; i++) {
    //     if (pn[i][0] == 0) continue;
    //     printf("%lld = %lld,%lld\n", i, pn[i][0], pn[i][1]);
    // }

    for (i = 0; i < 400*400; i++) {
        if (pn[i][0] == 0) continue;
        ans += pn[i][0] * pn[i][1];
    }

    printf("%lld\n", ans);

    return 0;
}