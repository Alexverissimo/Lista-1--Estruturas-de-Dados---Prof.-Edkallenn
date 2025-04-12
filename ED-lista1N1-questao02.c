/*
**    Função : Calcula o fatorial comum e o fatorial duplo de números de 2 a 20.
**    Autor : Alex Verissimo - Turma: CC - 3F
**    Data  : 12/04/2025
**    Observações: Mostra resultados tabulados e diferença entre eles. Resultados salvos em arquivo.
*/

#include <stdio.h>

long long fatorial(int n) {
    long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

long long fatorial_duplo(int n) {
    long long resultado = 1;
    for (int i = n; i >= 1; i -= 2) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    long long fatoriais[21], fatoriais_duplos[21];

    FILE *arquivo = fopen("tabela_fatoriais.txt", "w");
    if (!arquivo) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("n\tFatorial\tFatorial Duplo\tDiferença\n");
    fprintf(arquivo, "n\tFatorial\tFatorial Duplo\tDiferença\n");

    for (int i = 2; i <= 20; i++) {
        fatoriais[i] = fatorial(i);
        fatoriais_duplos[i] = fatorial_duplo(i);
        long long diferenca = fatoriais[i] - fatoriais_duplos[i];
        printf("%d\t%lld\t%lld\t\t%lld\n", i, fatoriais[i], fatoriais_duplos[i], diferenca);
        fprintf(arquivo, "%d\t%lld\t%lld\t\t%lld\n", i, fatoriais[i], fatoriais_duplos[i], diferenca);
    }

    fclose(arquivo);
    return 0;
}
