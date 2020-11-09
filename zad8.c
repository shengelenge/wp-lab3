#include <stdio.h>

int main()
{
    double pod;
    unsigned int w;

    printf("Podaj podstawe potegi: ");
    scanf("%lf", &pod);
    printf("Podaj wykladnik potegi: ");
    scanf("%d", &w);

    long int potega = 1;

    for (int i = 0; i < w; i++) {
        potega *= pod;
    }

    printf("%.1lf do %d = %ld", pod, w, potega);

    return 0;
}