/*
**    Função : Números Felizes.
**    Autor : Alex Verissimo- Turma: CC - 3F
**    Data  : 12/04/2025
**    Observações: Verifica e informa se o número fornecido pelo usuário é um número feliz,
      utilizando a soma dos quadrados dos dígitos.
*/


#include <stdio.h>
#include <stdbool.h>

int soma_quadrados_digitos(int n) {
    int soma = 0;
    while (n > 0) {
        int digito = n % 10;
        soma += digito * digito;
        n /= 10;
    }
    return soma;
}

bool eh_numero_feliz(int n) {
    int visitados[1000] = {0}; 

    while (n != 1 && !visitados[n]) {
        visitados[n] = 1;
        n = soma_quadrados_digitos(n);
    }

    return n == 1;
}

int main() {
    int n;
    printf("Digite um número para verificar se é feliz: ");
    scanf("%d", &n);

    if (eh_numero_feliz(n)) {
        printf("%d é um número feliz!\n", n);
    } else {
        printf("%d não é um número feliz.\n", n);
    }

    return 0;
}
