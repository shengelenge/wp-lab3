#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numer, pomysl, proby = 0;

    srand(time(0));
    numer = rand() % 100 + 1;
    printf("Zgadnij moj numer!\n\n");

    do {
        printf("Podaj numer z zakresu od 1 do 100: ");
        scanf("%d", &pomysl);
        proby++;

        if (pomysl > numer)
            printf("Za wysoko!\n\n");
        if (pomysl < numer)
            printf("Za nisko!\n\n");
        if (pomysl == numer)
            printf("Poprawna odpowiedz! Zgadles w %d probach.", proby);
    } while (pomysl != numer);
    
    return 0;
}