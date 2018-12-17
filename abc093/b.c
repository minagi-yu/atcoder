int main (void)
{
    int a, b, k, i;

    scanf("%d %d %d", &a, &b, &k);

    if((b - a) < (k * 2)) {
        for (i = a; i <= b; i++) {
            printf("%d\n", i);
        }
    } else {
        for (i = a; i < a + k; i++) {
            printf("%d\n", i);
        }
        for (i = b - k + 1; i <= b; i++) {
            printf("%d\n", i);
        }
    }
}
