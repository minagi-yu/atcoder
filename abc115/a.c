#include <stdio.h>

int main (void)
{
    int D;

    scanf("%d", &D);

    printf("Christmas");

    switch (D) {
    case 22:
        printf(" Eve");
    case 23:
        printf(" Eve");
    case 24:
        printf(" Eve");
    }

    puts("");

    return 0;
}
