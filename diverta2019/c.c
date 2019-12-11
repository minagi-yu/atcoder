#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main (int argc, char const *argv[])
{
    int64_t N;
    char s[11];
    int64_t initial_b = 0, final_a = 0, both = 0, ans = 0, flag = 0;

    scanf("%"PRId64, &N);
    for (int i = 0; i < N; i++) {
        int p = 0;
        scanf("%s", s);
        while (s[p]) {
            if ((s[p] == 'A') && (s[p + 1] == 'B')) ans++;
            p++;
        }
        if ((s[p - 1] == 'A') && (s[0] == 'B')) both++;
        else if (s[0] == 'B') initial_b++;
        else if (s[p - 1] == 'A') final_a++;
    }

    if (both) {
        ans += both - 1;
        if (initial_b) {
            ans += 1;
            initial_b--;
        }
        if (final_a) {
            ans += 1;
            final_a--;
        }
    }
    ans += initial_b > final_a ? final_a : initial_b;
    
    printf("%"PRId64"\n", ans);
}
