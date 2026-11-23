#include <stdio.h>

//escrevendo em arquivo
int main(){
    FILE *arquivo;
    arquivo = fopen("dados.txt", "w");

    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fprintf(arquivo, "Olá Mundo!\n");

    fclose(arquivo);

    printf("Arquivo escrito com sucesso.\n");
    return 0;
}