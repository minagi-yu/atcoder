#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}

int main (void)
{
    int n;
    int x[200000], s[200000];
    int i, j;

    scanf("%d", &n);
    for(i = 0; i < n; ++i){
        scanf("%d", &x[i]);
        s[i] = x[i];
    }

    qsort(s, n, sizeof(int), compare);

    for(i = 0; i < n; ++i){
        if(s[n / 2] <= x[i]) printf("%d\n", s[n / 2 - 1]); else printf("%d\n", s[n / 2]);
    }
}
