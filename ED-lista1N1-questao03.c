/*
**    Função : Verifica se dois números são amigáveis e lista todos até um limite.
**    Autor : Alex - Turma: CC - 3F
**    Data  : 12/04/2025
**    Observações: Mostra pares amigáveis e seus divisores.
*/

#include <stdio.h>

int soma_divisores_proprios(int n) {
    int soma = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            soma += i;
    }
    return soma;
}

void exibir_divisores(int n) {
    printf("Divisores próprios de %d: ", n);
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            printf("%d ", i);
    }
    printf("\n");
}

int sao_amigaveis(int a, int b) {
    return soma_divisores_proprios(a) == b && soma_divisores_proprios(b) == a;
}

void encontrar_amigaveis_ate(int limite) {
    for (int i = 2; i <= limite; i++) {
        for (int j = i + 1; j <= limite; j++) {
            if (sao_amigaveis(i, j)) {
                printf("\nPares amigáveis encontrados: %d e %d\n", i, j);
                exibir_divisores(i);
                exibir_divisores(j);
                printf("Soma dos divisores de %d = %d\n", i, soma_divisores_proprios(i));
                printf("Soma dos divisores de %d = %d\n", j, soma_divisores_proprios(j));
            }
        }
    }
}

int main() {
    int limite;
    printf("Digite o limite para procurar pares amigáveis: ");
    scanf("%d", &limite);

    encontrar_amigaveis_ate(limite);

    return 0;
}
