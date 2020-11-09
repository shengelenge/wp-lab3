#include <stdio.h>

int main()
{
    int i;

    printf("Podaj dodatnia liczbe calkowita\n");
    scanf("%d", &i);

    // Jezeli chce sie uzyc innej petli prosze dodac komentarz do nieuzywanych petli i usunac komentarz z wybranej petli

    /*while (i <= 0)
    {
        printf("Podaj ponownie dodatnia liczbe calkowita\n");
        scanf("%d", &i);
    }*/

    /*for (int j = i; j <= 0; j = i) {
        printf("Podaj ponownie dodatnia liczbe calkowita\n");
        scanf("%d", &i);
    }*/

    do {
        if (i <= 0)
        {
            printf("Podaj ponownie dodatnia liczbe calkowita\n");
            scanf("%d", &i);
        }
    } while (i <= 0);

    return 0;
}