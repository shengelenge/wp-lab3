#include <stdio.h>

int main()
{
    for (int i = 1; i <= 1000; i++)
    {
        if (i % 5 == 0 && i % 7 == 4)
        printf("%d ", i);
    }

    return 0;
}