#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <assert.h>

intmax_t get_gcd (intmax_t a, intmax_t b)
{
    if (b == 0) return a;
    else return get_gcd(b, a % b);
}

void eratosthenes(bool *list, size_t size, uintmax_t n)
{
    assert(size > n);

    list[0] = list[1] = false;
    for (size_t i = 2; i < size; i++) {
        list[i] = true;
    }

    for (size_t i = 2; i < size; i++) {
        if (list[i]) {
            for (size_t j = (i * 2); j < size; j += i) {
                list[j] = false; 
            }
        }
    }
}

int main (void)
{
    intmax_t A, B;
    intmax_t gcd;
    bool p[1000001];
    intmax_t ans = 0;

    scanf("%jd%jd", &A, &B);

    gcd = get_gcd(A, B);

    eratosthenes(p, sizeof(p), sqrt(1e12));

    for (size_t i = 1; i <= gcd; i++) {
        if ((gcd % i == 0) && p[i])
            ans++;
    }

    printf("%jd\n", ans + 1);

    return 0;
}
