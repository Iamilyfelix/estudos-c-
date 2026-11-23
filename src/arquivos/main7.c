#include <stdio.h>

//escrevendo strings - mas o modo a faz a mesma função, mas adiciona no final do arquivo, sem apagar o que já estava escrito

//isso não ta finalizado
int main(){
    FILE *arquivo;
    char nome[30];

    arquivo = fopen("alunos.txt", "w");

    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Digite seu nome: ");
    scanf("%s", nome);

    fputs(nome, arquivo);


    fclose(arquivo);

    printf("Arquivo escrito com sucesso.\n");
    return 0;
}