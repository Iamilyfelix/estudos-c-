#include <stdio.h>

//lendo arquivo
int main(){
    FILE *arquivo;
    char nome[50];
    int idade;
    float nota;

    arquivo = fopen("alunos.txt", "r");

    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fscanf(arquivo, "Nome: %49s\n", nome);
    fscanf(arquivo, "Idade: %d\n", &idade);
    fscanf(arquivo, "Nota: %f\n", &nota);

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Nota: %.2f\n", nota);

    fclose(arquivo);

    printf("Arquivo lido com sucesso.\n");
    return 0;
}