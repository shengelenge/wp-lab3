#include <stdio.h>

int main()
{
    double max, max2, kolejna;

    printf("Podaj liczby rzeczywsite, po wpisaniu 0 program zakonczy wczytywanie.\nLiczby:\n");
    scanf("%lf", &kolejna);

    if (kolejna != 0)
    {
        max = kolejna;
        scanf("%lf", &kolejna);
        while (kolejna)
        {
            if (kolejna > max)
            {
                max2 = max;
                max = kolejna;
            }
            scanf("%lf", &kolejna);
        }
        printf("drugi najwiekszy element = %.2lf\n", max2);
    }
    else
        printf("Ciag wejsciowy jest pusty.\n");

    return 0;
}