#include <stdio.h>

int main (void)
{
    long long N, A, B, P;
    int i;
    long long one = 0, two = 0, three = 0, ans;

    scanf("%lld", &N);
    scanf("%lld %lld", &A, &B);
    for (i = 0; i < N; i++) {
        scanf("%lld", &P);
        if (P <= A) one++;
        else if ((P > A) && (P <= B)) two++;
        else three++;
    }

    ans = (one < two) ? one : two;
    ans = (ans < three) ? ans : three;

    printf("%lld\n", ans);

    return 0;
}

