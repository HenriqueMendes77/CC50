#include <stdio.h>

int main()
{
    int height = 0;

    do
    {
        printf("Altura (1 a 20): ");
        scanf("%i", &height);
    } while (height < 1 || height > 20);

    for (int i = 0; i < height; i++)
    {
        for (int c = height; c > i; c--)
        {
            printf(" ");
        }

        for (int c = 0; c <= i; c++)
        {
            printf("#");
        }

        printf("  ");

        for (int d = 0; d <= i; d++)
        {
            printf("#");
        }

        printf("\n");
    }
    
    return 0;
}