#include <stdio.h>
    
int main (void)
{
    int a, b, c, d;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    
    printf("%d\n", ((a < b) ? a : b) + ((c < d) ? c : d));
}