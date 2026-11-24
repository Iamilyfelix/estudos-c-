#include <stdio.h>

int main(){
    FILE *arquivo;

    char nome[50];
    float nota;

    float soma = 0;
    int quantidade = 0;
    float media = 0;
    float maiorNota = 0;

    arquivo = fopen("notas.txt", "r");

    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while(fscanf(arquivo,"%49s %f", nome,&nota) == 2){
        printf("Nome: %s\n", nome);
        printf("Nota: %.2f\n", nota);

        soma += nota;
        quantidade++;

        if (nota > maiorNota){
            maiorNota = nota;
        }
    }
    if (quantidade == 0){
        printf("Nenhuma nota encontrada no arquivo.\n");
        
    }else{
        media = soma / quantidade;
        printf("Media das notas: %.2f\n", media);
        printf("Maior nota: %.2f\n", maiorNota);
    }

    fclose(arquivo);
    return 0;

}