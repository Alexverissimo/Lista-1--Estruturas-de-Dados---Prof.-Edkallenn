/*
**    Função : Números Armstrong.
**    Autor : Alex Verissimo- Turma: CC - 3F
**    Data  : 12/04/2025
**    Observações:  Exibe todos os números Armstrong entre 1 e 100, que são iguais à soma do cubo de seus dígitos.
*/

#include <stdio.h>
#include <stdbool.h>

bool eh_numero_armstrong(int n) {
    int original = n, soma = 0;

    while (n > 0) {
        int digito = n % 10;
        soma += digito * digito * digito;
        n /= 10;
    }

    return soma == original;
}

int main() {
    printf("Números de Armstrong entre 1 e 100:\n");
    for (int i = 1; i <= 100; i++) {
        if (eh_numero_armstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
