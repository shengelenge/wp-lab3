#include <stdio.h>

double pi(long int n)
{
    double wartosc = 2;
    while (n >= 0)
    {
        wartosc = ((2*n + 1) * (2*n + 1)) / (2.0 + wartosc);
        n--;
    }

    return 4.0 / (1.0 + wartosc);
}

int main()
{
    long int n;
    double w;

    printf("Podaj ilosc wyrazow do obliczenia: ");
    scanf("%ld", &n);

    w = pi(n);
    printf("Pi = %lf", w);


    return 0;
}