#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    int64_t n, v;
    int64_t oddnum[(int)1e5] = {0}, evennum[(int)1e5] = {0};
    uint64_t ans = 0, oddmax = 0, evenmax = 0, oddmax2 = 0, evenmax2 = 0, oddi = 0, eveni = 0;

    scanf("%"PRId64, &n);
    for (int i = 0; i < n; i++) {
        scanf("%"PRId64, &v);
        if (i % 2) {
            oddnum[v]++;
        } else {
            evennum[v]++;
        }
    }

    for (int i = 0; i < (int)1e5; i++) {
        if (oddmax < oddnum[i]) {
            oddmax2 = oddmax;
            oddmax = oddnum[i];
            oddi = i;
        } else if (oddmax2 < oddnum[i]) {
            oddmax2 = oddnum[i];
        }
        if (evenmax < evennum[i]) {
            evenmax2 = evenmax;
            evenmax = evennum[i];
            eveni = i;
        } else if (evenmax2 < evennum[i]) {
            evenmax2 = evennum[i];
        }
    }

    if (oddi != eveni) {
        ans = ((n / 2) - oddmax) + ((n / 2) - evenmax);
    } else {
        if ((oddmax + evenmax2) > (oddmax2 + evenmax)) {
            ans = ((n / 2) - oddmax) + ((n / 2) - evenmax2);
        } else {
            ans = ((n / 2) - oddmax2) + ((n / 2) - evenmax);
        }
    }

    printf("%"PRId64"\n", ans);
}
