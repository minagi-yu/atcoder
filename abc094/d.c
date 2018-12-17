#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int n;
    int a[(int)10e5];
    int i, m = 0, c, d = (int)10e9;

    scanf("%d", &n);
    for(i = 0; i < n; ++i){
        scanf("%d", &a[i]);
        if(m < a[i]) {
            m = a[i];
        }
    }
    c = m;
    for(i = 0; i < n; ++i){
        if(abs(m / 2 - a[i]) < d || m == c) {
            c = a[i];
            d = abs(m / 2 - a[i]);
        }
    }
    printf("%d %d\n", m, c);
}
