#include <stdio.h>

long long N, X;
long long layer[51], patty[51];

long long get_layer (int level)
{
    if (level == 0) return 1;
    return get_layer(level - 1) * 2 + 3;
}

long long get_patty (int level)
{
    if (level == 0) return 1;
    return get_patty(level - 1) * 2 + 1;
}

long long eat_runrun (int level, long long x)
{
    if (level == 1) {
        if (x == 5)  return 3;
        if (x == 4) return 3;
        if (x == 3) return 2;
        if (x == 2) return 1;
        return 0;
    }
    if (x > layer[level] - 1) return patty[level];
    if (x == (layer[level] + 1) / 2) return patty[level - 1] + 1;
    else if (x < (layer[level] + 1) / 2) return eat_runrun(level - 1, x - 1);
    else return patty[level - 1] + 1 + eat_runrun(level - 1, x - (layer[level] + 1) / 2);
}

int main (void)
{
    int i;

    scanf("%lld %lld", &N, &X);

    for (i = 0; i < 51; i++) {
        layer[i] = get_layer(i);
        patty[i] = get_patty(i);
    }

    // for (i = 0; i < 51; i++) {
    //     printf("%lld\n", patty[i]);
    // }

    printf("%lld\n", eat_runrun(N, X));

    return 0;

}
