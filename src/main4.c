#include <stdio.h>
// aula9 

typedef struct{
    char nome[30];
    float preco;
    int quantidade;
}Produto;

int main(){
    float valorTotal = 0;
    
    Produto item = {"Camiseta", 29.99, 10};

    valorTotal = item.preco * item.quantidade;

    printf("Produto: %s\nPreco: %.2f\nQuantidade: %d\nValor Total: %.2f\n", item.nome, item.preco, item.quantidade, valorTotal);



}