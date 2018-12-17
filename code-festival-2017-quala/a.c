#include <stdio.h>
#include <string.h>

int main (void)
{
    char str[11];
    char yaki[] = "YAKI";

    scanf("%s", str);

    if (strncmp(str, yaki, 4)) {
        printf("No");
    } else {
        printf("Yes");
    }

    return 0;
}
