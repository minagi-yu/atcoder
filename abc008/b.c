#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

typedef struct {
    int64_t t;
    char    s[51];
} VOTE;


int main (int argc, char const *argv[])
{
    int64_t N;
    VOTE v[50];
    char tmp[51];
    int64_t max = 0, ans = 0;

    for (int i = 0; i < 50; i++) {
        v[i].s[0] = '\0';
        v[i].t = 0;
    }

    scanf("%"PRId64, &N);
    for (int i = 0; i < N; i++) {
        scanf("%s", tmp);
        for (int j = 0; j < 50; j++) {
            if ((v[j].t == 0) || (strcmp(v[j].s, tmp) == 0)) {
                v[j].t++;
                strcpy(v[j].s, tmp);
                break;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        if (v[i].t > max) {
            max = v[i].t;
            ans = i;
        }
    }

    printf("%s\n", v[ans].s);

    return 0;
}
