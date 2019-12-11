#include <stdio.h>

int main (void)
{
    int N;
    scanf("%d", &N);
    if (N % 3) puts("NO");
    else puts("YES");
    return 0;
}
