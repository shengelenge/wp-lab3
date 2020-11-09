#include <stdio.h>

int main()
{
    unsigned int n, wynik;

    printf("Podaj liczbe naturalna: ");
    scanf("%d", &n);

    wynik = 0;

    while (n != 0)
    {
        wynik = wynik + (n % 10);
        n = n / 10;
    }

    printf("wynik = %d", wynik);

    return 0;
}