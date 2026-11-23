#include <stdio.h>

typedef struct{
    char marca[30];
    char modelo[30];
    int ano;
} Veiculo; 

typedef struct{
    int numero;
    char categoria[10];
} Cnh;

typedef struct{
    char nome[30];
    int idade;
    Veiculo v;
    Cnh c;
} Pessoa; 

int main(){
    Pessoa p = {"Maria", 30, {"Ford", "Ka", 2020}, {123456789, "B"}};

    printf("Nome: %s\n Idade: %d\n Veiculo:\n marca: %s modelo: %s ano: %d\n CNH:\n Numero: %d Categoria: %s\n", p.nome, p.idade, p.v.marca, p.v.modelo, p.v.ano, p.c.numero, p.c.categoria);


    return 0;
}