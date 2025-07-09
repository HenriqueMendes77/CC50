#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    char texto[100];

    printf("Texto: ");
    fgets(texto, sizeof(texto), stdin);

    int letras = 0;
    int palavras = 1;
    int frases = 0;

    for (int i = 0; i < strlen(texto); i++)
    {
        if (isalpha(texto[i]))
        {
            letras++;
        }
        else if (texto[i] == ' ')
        {
            palavras++;
        }
        else if (texto[i] == '.' || texto[i] == '!' || texto[i] == '?')
        {
            frases++;
        }
    }

    int resultado = 0.0588 * (letras * 100) / palavras - 0.296 * (frases * 100) / palavras - 15.8;

    printf("\n===================================");
    printf("\nletras: %i", letras);
    printf("\npalavras: %i", palavras);
    printf("\nfrases: %i", frases);
    printf("\nresultado: %i", resultado);
    printf("\n===================================");

    return 0;
}
