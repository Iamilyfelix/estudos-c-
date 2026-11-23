#include <stdio.h>

// escrevendo nome

int main(){

    FILE *arquivo;

    char nome[30];

    arquivo = fopen("dados.txt", "w");

    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Digite seu nome: ");
    scanf("%s", nome);

    fprintf(arquivo, "Nome: %s\n", nome);

    fclose(arquivo);

    return 0;
}