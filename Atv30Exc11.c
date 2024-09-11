#include <stdio.h>

#define TAMANHO 10

void ordenarCrescente(int numeros[], int tamanho) {
    int i, j, temp;

    // Algoritmo Bubble Sort
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                // Troca os elementos
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numeros[TAMANHO];

    // Entrada dos números
    printf("Digite 10 numeros:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Ordena os números em ordem crescente
    ordenarCrescente(numeros, TAMANHO);

    // Exibe os números ordenados
    printf("\nNumeros em ordem crescente:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
