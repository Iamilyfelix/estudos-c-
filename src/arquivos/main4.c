#include <stdio.h>

//escrevendo dados

int main(){
    FILE *arquivo;

    char nome[30];
    int idade;
    float nota;

    arquivo = fopen("alunos.txt", "w");

    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);   

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    fprintf(arquivo, "Nome: %s\n", nome);
    fprintf(arquivo, "Idade: %d\n", idade);
    fprintf(arquivo, "Nota: %.2f\n", nota);

    fclose(arquivo);

    printf("Arquivo escrito com sucesso.\n");
    return 0;
}