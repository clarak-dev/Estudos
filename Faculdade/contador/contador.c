#include <stdio.h>

// Função que verifica se um número é par ou ímpar
const char* verificar_par_impar(int numero) {
    if (numero % 2 == 0) {
        return "par";
    } else {
        return "impar";
    }
}

int main() {
    int numero_inicial, numero_final;
    int contador_pares = 0;

    // Solicita ao usuário que insira os números
    printf("Digite o numero inicial: ");
    scanf("%d", &numero_inicial);
    printf("Digite o numero final: ");
    scanf("%d", &numero_final);

    // Estrutura de repetição para verificar cada número no intervalo
    for (int i = numero_inicial; i <= numero_final; i++) {
        const char* resultado = verificar_par_impar(i);
        printf("O numero %d e %s.\n", i, resultado);
        
        // Contador de números pares
        if (resultado == "par") {
            contador_pares++;
        }
    }

    // Exibe a quantidade total de números pares encontrados
    printf("Total de numeros pares encontrados: %d\n", contador_pares);

    return 0;
}