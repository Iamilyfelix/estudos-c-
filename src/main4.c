#include <stdio.h>
// aula9 

typedef struct{
    char nome[30];
    float preco;
    int quantidade;
}Produto;

int main(){
    Produto p;
    Produto produtos[100];
    int quantidade;

    printf("Quantos produtos vc quer cadastrar: ");
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++){
        printf("Digite o nome do produto: ");
        scanf("%s", &p.nome[i]);

        printf("Digite o preco do produto: ");
        scanf("%f", &p.preco[i]);

        printf("Digite a quantidade do produto: ");
        scanf("%d", &p.quantidade[i]);
    }



}