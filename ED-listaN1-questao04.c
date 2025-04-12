/*
**    Função : Verificar se um número é automórfico.
**    Autor : Alex Verissimo- Turma: CC - 3F
**    Data  : 12/04/2025
**    Observações: O programa identifica e imprime os números automórficos no intervalo de 2 até um valor definido pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool eh_numero_automorfico(int n) {
    int quadrado = n * n;

    int temp = n;
    int potencia = 1;

    while (temp > 0) {
        potencia *= 10;
        temp /= 10;
    }

    return (quadrado % potencia == n);
}

int main() {
    int n;

    printf("Digite o limite superior (maior que 2): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Digite um número maior que 2.\n");
        return 1;
    }

    int* automorficos = malloc((n - 1) * sizeof(int));
    int count = 0;

    for (int i = 2; i <= n; i++) {
        if (eh_numero_automorfico(i)) {
            automorficos[count++] = i;
        }
    }

    printf("Números automórficos entre 2 e %d:\n", n);
    for (int i = 0; i < count; i++) {
        printf("%d ", automorficos[i]);
    }
    printf("\n");

    free(automorficos);
    return 0;
}
