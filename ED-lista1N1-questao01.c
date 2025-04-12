/*
**    Função : Calcula potências fatoriais, tanto crescentes quanto decrescentes, para um número fixo 'x' e valores de 'n' variando de 2 a 10.
**    Autor : Alex Verissimo- Turma: CC - 3F
**    Data  : 12/04/2025
**    Observações: Exibe uma tabela com os resultados das potências fatoriais de 'x', variando 'n' de 2 a 10. O código também permite salvar esses resultados em um arquivo de texto para futuras consultas.
*/

#include <stdio.h>

long long calcula_potencia_fatorial_crescente(int x, int n) {
    long long resultado = 1;
    
    for (int i = 0; i < n; i++) {
        resultado *= (x + i);
    }
    return resultado;
}

long long calcula_potencia_fatorial_decrescente(int x, int n) {
    long long resultado = 1;
    
    for (int i = 0; i < n; i++) {
        resultado *= (x - i);
    }
    return resultado;
}

int main() {

    FILE *arquivo = fopen("tabela_potencias.txt", "w");
    if (!arquivo) {
        printf("Erro ao abrir o arquivo para salvar os resultados!\n");
        return 1;
    }

    printf("Tabela: Potências Fatoriais (x fixo, n variando de 2 a 10)\n");
    fprintf(arquivo, "Tabela: Potências Fatoriais (x fixo, n variando de 2 a 10)\n");

    for (int x = 2; x <= 10; x++) {
        printf("\nPara x = %d:\n", x);
        printf("n\tCrescente\tDecrescente\n");
        fprintf(arquivo, "\nPara x = %d:\n", x);
        fprintf(arquivo, "n\tCrescente\tDecrescente\n");

        for (int n = 2; n <= 10; n++) {
            long long cres = calcula_potencia_fatorial_crescente(x, n);
            long long dec = calcula_potencia_fatorial_decrescente(x, n);
            
           
            printf("%d\t%lld\t\t%lld\n", n, cres, dec);
            fprintf(arquivo, "%d\t%lld\t\t%lld\n", n, cres, dec);
        }
    }

    fclose(arquivo);
    return 0;
}
