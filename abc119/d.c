#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    int64_t N, M, A[10], digit[9] = {2,5,5,4,5,6,3,7,6};
    int64_t i, tmp, two = 0, three = 0, five = 0, seven = 0, ans = 0, min;

    scanf("%"PRId64"%"PRId64, &N, &M);
    for (i = 0; i < M; i++) {
        scanf("%"PRId64, &tmp);
        A[tmp] = 1;
    }

    for (i = 0; (N % 2 == 0); i++) {
        N /= 2;
    }
    if (i != 0) two = i;
    for (i = 0; (N % 3 == 0); i++) {
        N /= 3;
    }
    if (i != 0) three = i;
    for (i = 0; (N % 5 == 0); i++) {
        N /= 5;
    }
    if (i != 0) five = i;
    for (i = 0; (N % 7 == 0); i++) {
        N /= 7;
    }
    if (i != 0) seven = i;

    printf("2 = %lld, 3 = %lld, 5 = %lld, 7 = %lld\n", two, three, five, seven);

    if (three) {
        if (A[7] == 0) two -= three;
    }

    if (three > 0) {
        if (A[7] == 0) {
            if (A[9]) {
                while (three) {
                    printf("9");
                    three--;
                }
            }
        }
    }

    if (seven) {
        while (seven) {
            printf("8");
            seven--;
        }
    }

    if (three) {
        while (three) {
            printf("7");
            three--;
        }
    }

    if (three > 0) {
        if (A[7] == 0) {
            while (three) {
                printf("6");
                three--;
            }
        }
    }

    if (five) {
        if (A[5]) {
            while (five) {
                printf("5");
                five--;
            }
        }
    }

    if (two) {
        if (A[4]) {
            while (two) {
                printf("4");
                two -= 2;
            }
        }
    }

    if (five) {
        if (A[3]) {
            while (five) {
                printf("3");
                five--;
            }
        }
    }

    if (five) {
        if (A[2]) {
            while (five) {
                printf("2");
                five--;
            }
        }
    }

    if (two) {
        while (two) {
            printf("1");
            two--;
        }
    }

    puts("");
}
