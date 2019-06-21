#include <stdio.h>

int main (void)
{
    int n, m, i, j, k;
    int a[50], b[50];
    int edge[50][50]; //辺を入れる配列
    int node[50];
    int bridge = 0;

    //初期化
    for (i = 0; i < 50; i++) {
        node[i] = 0;
        for (j = 0; j < 50; j++) {
            edge[i][j] = 0;
        }
    }

    scanf("%d %d", &n, &m);

    for (i = 0; i < m; i++) {
        scanf("%d %d", &a[i], &b[i]);
        edge[a[i] - 1][b[i] - 1] = 1;
    }

    //一つづつ消して繋がるか試す
    for (i = 0; i < m; i++) {
        edge[a[i] - 1][b[i] - 1] = 0; //消す

        for (j = 0; j < n; j++) {
            node[j] = 0;
        }

        //繋がってる頂点を調べる
        for (j = 0; j < n; j++) {
            for (k = 0; k < n; k++) {
                if (edge[j][k] == 1) {
                    node[j] = 1;
                    node[k] = 1;
                }
            }
        }

        //すべての頂点がつながってるかどうか
        k = 0;
        for (j = 0; j < n; j++) {
            if (node[j] == 1) {
                k += 1;
            }
        }
        if (k != n) {
            bridge += 1; //すべて1じゃない＝＞橋なので数を増やす
        }

        edge[a[i] - 1][b[i] - 1] = 1; //もとに戻す
    }

    printf("%d\n", bridge);

    return 0;
}
