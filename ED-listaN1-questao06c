/*
**    Função :Verifica se o número é Carmichael
**    Autor : Alex Verissimo- Turma: CC - 3F
**    Data  : 12/04/2025
**    Observações: Identifica e exibe os números de Carmichael entre 2 e n, onde n é fornecido pelo usuário.
*/

#include <stdio.h>
#include <stdbool.h>

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int mod_pow(int base, int exp, int mod) {
    int resultado = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1)
            resultado = (resultado * base) % mod;
        exp /= 2;
        base = (base * base) % mod;
    }
    return resultado;
}

bool eh_primo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;

}
bool eh_numero_carmichael(int n) {
    if (eh_primo(n)) return false;

    for (int a = 2; a < n; a++) {
        if (mdc(a, n) == 1 && mod_pow(a, n, n) != a) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    printf("Digite o limite superior: ");
    scanf("%d", &n);

    printf("Números de Carmichael entre 2 e %d:\n", n);
    for (int i = 2; i <= n; i++) {
        if (eh_numero_carmichael(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
