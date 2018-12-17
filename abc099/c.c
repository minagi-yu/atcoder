#include <stdio.h>

int d[] = {
    9*9*9*9*9, 6*6*6*6*6*6, 6*6*6*6*6, 9*9*9*9, 6*6*6*6, 9*9*9, 6*6*6, 9*9, 6*6, 9, 6, 1
};

int draw(int n, int i)
{
    int i, ans;
    if (n < 6) return n;
    if (n < 9) return 1 + (n - 6);
    if (draw(n, i) < draw(n, i + 1)) {
        ans = draw(n, i);
    } else {
        ans = draw(n, i + 1);
    }
    return ans;
}

int main (void)
{
    int n, i = 0, ans = 0;

    scanf("%d", &n);

    while(d[i] > n) i++;
    printf("%d\n", draw(n, i));

}