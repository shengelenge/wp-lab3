#include <stdio.h>

int main()
{
    unsigned int n;
    long int silnia = 1;

    printf("Wpisz liczbe naturalna n: ");
    scanf("%d", &n);

    for (int i = n; i > 1 ; i--) {
        silnia *= i;
    }

    printf("%d! = %ld", n, silnia);

    return 0;
}