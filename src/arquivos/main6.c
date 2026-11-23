#include <stdio.h>

//lendo linhas completas 

int main(){
    FILE *arquivo;
    char nome[100];

    arquivo = fopen("alunos.txt", "r");

    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    if (fgets(nome, sizeof(nome), arquivo) != NULL){
        printf("%s", nome);
    }

    fclose(arquivo);

    printf("Arquivo lido com sucesso.\n");
    return 0;
}