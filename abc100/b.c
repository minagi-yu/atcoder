#include <stdio.h>
#include <math.h>

int main (void)
{
    int d, n;

    scanf("%d %d", &d, &n);
    if (n != 100) {
        printf("%d\n", (int)pow((double)100, (double)d) * n);
    } else {
        printf("%d\n", (int)pow((double)100, (double)d) * n + (int)pow((double)100, (double)d));
    }
    
    return 0;
}
