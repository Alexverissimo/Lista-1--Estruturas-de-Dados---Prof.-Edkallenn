/*
**    Função : Verfica se um numero é perferito.
**    Autor : Alex Verissimo- Turma: CC - 3F
**    Data  : 12/04/2025
**    Observações: Exibe todos os números perfeitos entre 1 e 100000, onde a soma dos divisores próprios é igual ao número.
*/

#include <stdio.h>
#include <stdbool.h>

bool eh_numero_perfeito(int n) {
    int soma = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }

    return soma == n;
}

int main() {
    printf("Números perfeitos entre 1 e 100000:\n");

    for (int i = 2; i <= 100000; i++) {
        if (eh_numero_perfeito(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
