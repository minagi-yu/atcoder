#include <stdio.h>
#include <string.h>

int main (void)
{
    char week[][4] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    char S[4];
    size_t ans = 0;
    
    gets(S);

    while (strcmp(&week[ans][0], S)) ans++; 

    ans = 7 - ans;

    printf("%jd\n", ans);

    return 0;
}

