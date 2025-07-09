#include <stdio.h>
#include <math.h> 

int main(void)
{
    float valor = 0;
    float pago = 0;
    int m25 = 0;
    int m10 = 0;
    int m5 = 0;
    int m1 = 0;

    printf("\nValor: ");
    scanf("%f", &valor);

    printf("\nPago: ");
    scanf("%f", &pago);

    int troco = (int) round((pago - valor) * 100);

    if (troco > 0)
    {
        m25 = troco / 25;
        troco %= 25;

        m10 = troco / 10;
        troco %= 10;

        m5 = troco / 5;
        troco %= 5;

        m1 = troco;
    }

    printf("\nMoedas de 25: %i", m25);
    printf("\nMoedas de 10: %i", m10);
    printf("\nMoedas de 5: %i", m5);
    printf("\nMoedas de 1: %i", m1);

    return 0;
}
