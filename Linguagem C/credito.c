#include <stdio.h>
#include <string.h>

int main(void)
{
    char cartao[25];
    printf("Cartão: ");
    fgets(cartao, sizeof(cartao), stdin);
    cartao[strcspn(cartao, "\n")] = '\0';

    int n_digitos = strlen(cartao);

    char primeiro_digito[3];
    strncpy(primeiro_digito, cartao, 2);
    primeiro_digito[2] = '\0';

    char inverso[25];
    for (int i = 0; i < n_digitos; i++) {
        inverso[i] = cartao[n_digitos - 1 - i];
    }
    inverso[n_digitos] = '\0';

    int p1 = 0;
    int p2 = 0;

    for (int i = 1; i < n_digitos; i += 2) {
        int n = (inverso[i] - '0') * 2;
        if (n > 9)
            p1 += (n / 10) + (n % 10);
        else
            p1 += n;
    }

    for (int i = 0; i < n_digitos; i += 2) {
        p2 += inverso[i] - '0';
    }

    int total = p1 + p2;

    if (total % 10 == 0) {
        printf("Cartão válido\n");
    } else {
        printf("Cartão inválido\n");
    }

    return 0;
}
