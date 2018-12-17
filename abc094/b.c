#include <stdio.h>

int main (void)
{
    int n, m, x;
    int i;
    int a;
    int cost;
    
    scanf("%d %d %d", &n, &m, &x);

    for(i = 0; i < m; ++i){
        scanf("%d", &a);
        if(a < x) cost++;
    }

    printf("%d\n", (m - cost) < cost ? (m - cost) : cost);
}
