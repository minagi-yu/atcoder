#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

struct task {
    intmax_t A;
    intmax_t B;
};

int compareB (const void *a, const void *b)
{
    if(((struct task *)a)->B - ((struct task *)b)->B < 0)
        return -1;
    if(((struct task *)a)->B - ((struct task *)b)->B > 0)
        return 1;
    return 0;
}

int main (int argc, char const *argv[])
{
    intmax_t N;
    struct task task[(int)2e5];
    intmax_t time = 0, ans = 0;

    scanf("%jd", &N);
    for (size_t i = 0; i < N; i++) {
        scanf("%jd%jd", &task[i].A, &task[i].B);
    }

    qsort(task, N, sizeof(struct task), compareB);

    for (size_t i; i < N; i++) {
        time += task[i].A;
        if (time > task[i].B) {
            puts("No");
            return 0;
        }
    }

    puts("Yes");

    return 0;
}
