#include <stdio.h>

int main (int argc, char *argv[])
{
    char W[31];
    char *p = W;

    gets(W);

    while (*p) {
        if ((*p == 'a') || (*p == 'i') || (*p == 'u') || (*p == 'e') || (*p == 'o')) {
            p++;
            continue;
        }
        putchar(*p++);
    }
    putchar('\n');

    return 0;
}
