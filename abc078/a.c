#include <stdio.h>

int main(void) {
    char x, y;

    scanf("%c %c", &x, &y);

    puts((x >= y) ? (x > y) ? ">" : "=" : "<");

    
    return 0;
}