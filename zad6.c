#include <stdio.h>

int main()
{
    unsigned int n;

    printf("Wpisz liczbe naturalna n: ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("1");
    } else {
        do {
            int r;
            r = n % 2;
            printf("%d ", r);
            n = n / 2;
        } while (n >= 2);

        printf("1");
    }

    return 0;
}