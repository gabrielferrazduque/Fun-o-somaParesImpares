 #include <stdio.h>
#include <stdlib.h>
// Função que calcula a soma dos números pares e ímpares de 0 até n
void somaParesImpares(int n, int* par, int* impar) {
    *par = 0;    // Zera o valor de soma dos pares
    *impar = 0;  // Zera o valor de soma dos ímpares

    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            *par += i;     // Soma número par
        } else {
            *impar += i;   // Soma número ímpar
        }
    }
}

 return 0;()
 
 #include <stdio.h>  
 #include <stdlib.h>

 
// Função que calcula a soma dos números pares e ímpares de 0 até n
void somaParesImpares(int n, int* par, int* impar) {
    *par = 0;    // inicializa soma dos pares
    *impar = 0;  // inicializa soma dos ímpares

    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            *par += i;     // acumula números pares
        } else {
            *impar += i;   // acumula números ímpares
        }
    }
}

return 1;()
int main() {
    int n, somaPar, somaImpar;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    somaParesImpares(n, &somaPar, &somaImpar);

    printf("Soma dos números pares de 0 até %d: %d\n", n, somaPar);
    printf("Soma dos números ímpares de 0 até %d: %d\n", n, somaImpar);

    return 0;
}
int main() {
    int n, somaPar, somaImpar;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    somaParesImpares(n, &somaPar, &somaImpar);

    printf("Soma dos pares: %d\n", somaPar);
    printf("Soma dos ímpares: %d\n", somaImpar);

    return 0;
}
