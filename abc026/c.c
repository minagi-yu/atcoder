#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

struct e {
    uintmax_t n;
    uintmax_t B;
};

int desc(const void *a, const void *b)
{
    if (((struct e *)a)->B > ((struct e *)b)->B)
        return -1;
    else if (((struct e *)a)->B < ((struct e *)b)->B)
        return 1;
    else
        return 0;
}


int main(void)
{
    size_t N;
    struct e e[20];

    uintmax_t salary[21] = {};

    for (size_t i = 0; i < 21; i++) {
        salary[i] = 1;
    }

    scanf("%zu", &N);
    for (size_t i = 0; i < (N - 1); i++) {
        e[i].n = i + 2;
        scanf("%ju", &e[i].B);
    }

    qsort(e, (N - 1), sizeof(struct e), desc);

    uintmax_t max = salary[e[0].n], min = salary[e[0].n];
    for (size_t i = 0; i < (N - 1); i++) {
        if (max < salary[e[i].n])
            max = salary[e[i].n];
        else if (min > salary[e[i].n])
            min = salary[e[i].n];

        if (((i + 1) >= (N - 1)) || (e[i].B != e[i + 1].B)) {
            salary[e[i].B] = max + min + 1;
            if ((i + 1) >= (N - 1)) break;
            max = salary[e[i + 1].n];
            min = salary[e[i + 1].n];
        }
    }

    printf("%ju", salary[1]);

    return 0;
}
