#include <stdio.h>

int main() {
    int vetor[10];
    int maior, menor;

    // Ler os valores do vetor
    printf("Digite 10 valores inteiros para o vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    // Inicializar as variáveis maior e menor com o primeiro elemento do vetor
    maior = vetor[0];
    menor = vetor[0];

    // Encontrar o maior e o menor elemento do vetor
    for (int i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    // Imprimir o maior e o menor elemento
    printf("O maior elemento do vetor é: %d\n", maior);
    printf("O menor elemento do vetor é: %d\n", menor);

  
}
