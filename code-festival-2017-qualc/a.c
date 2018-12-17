#include <stdio.h>

int main(void) {
    char str[6];
    int i;

    scanf("%s", str);

    for (i = 0; str[i + 1] != '\0'; i++) {
        if (str[i] == 'A') {
            if (str[i+1] == 'C') {
                puts("Yes");
                return 0;
            }
        }
    }

    puts("No");

    return 0;
}