/*
**    Função :  Soma de Fatoriais Inversos.
**    Autor : Alex Verissimo- Turma: CC - 3F
**    Data  : 12/04/2025
**    Observações: Calcula e exibe a soma dos fatoriais inversos de 1 até n!, onde n é fornecido pelo usuário.
*/

#include <stdio.h>

double fatorial(int n) {
    double fat = 1;
    for (int i = 2; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

double soma_fatoriais_inversos(int n) {
    double soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += 1.0 / fatorial(i);
    }
    return soma;
}

int main() {
    int n;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    double resultado = soma_fatoriais_inversos(n);
    printf("Soma dos fatoriais inversos até %d!: %.10f\n", n, resultado);
    return 0;
}
