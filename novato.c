#include <stdio.h>
#include <string.h>

/*
    Struct Territorio:
    Armazena informações de cada território:
    - nome: nome do território
    - cor: cor do exército associado
    - tropas: quantidade de tropas alocada
*/
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    // Vetor para armazenar os 5 territórios
    struct Territorio territorios[5];

    printf("=== Cadastro de Territórios ===\n\n");

    // Entrada dos dados dos 5 territórios
    for (int i = 0; i < 5; i++) {
        printf("Cadastro do territorio %d:\n", i + 1);

        printf("Digite o nome do territorio: ");
        scanf("%s", territorios[i].nome); // Lê string sem espaços

        printf("Digite a cor do exercito: ");
        scanf("%s", territorios[i].cor); // Lê string sem espaços

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n");
    }

    // Exibição dos dados após o cadastro
    printf("=== Territorios cadastrados ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exercito: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
        printf("----------------------------\n");
    }

    return 0;
}
