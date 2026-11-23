#include <stdio.h>
// aula 9, Q2

int main(){
    int encontrado = 0;
    int usuarios;
    int id, idade, dependentes, renda;
    int opcao;
    int matriz[10][4];

    do{
        printf("\n---------------------------------\n");
        printf("1 - Cadastro de usuarios\n");
        printf("2- Pesquisa de usuarios\n");
        printf("3- Sair\n");
        printf("---------------------------------\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1){
            printf("Digite a quantidade de usuarios: ");
            scanf("%d", &usuarios);

            for (int i=0; i<usuarios; i++){
                for(int j=0; j<usuarios; j++){
                    printf("Usuario: ");
                    scanf("%d", &id);

                    if (id == matriz[i][j]){
                        printf("Usuario ja cadastrado!\n");
                        i--; // decrementa i para tentar novamente
                    }else{
                        matriz[i][0] = id;

                        printf("Idade: ");
                        scanf("%d", &idade);
                        printf("Numero de dependentes: ");
                        scanf("%d", &dependentes);
                        printf("Renda mensal: ");
                        scanf("%d", &renda);   

                        matriz[i][1] = idade;
                        matriz[i][2] = dependentes;
                        matriz[i][3] = renda;
                    }
                    }
            }
        }else if(opcao == 2){

            printf("Digite o ID do usuario: ");
            scanf("%d", &id);

            for (int i=0; i<usuarios; i++){
                for(int j=0; j<=3; j++){
                    if(matriz[i][j] == id){
                        printf("Usuario: %d\n", matriz[i][0]);
                        printf("Idade: %d\n", matriz[i][1]);
                        printf("Numero de dependentes: %d\n", matriz[i][2]);
                        printf("Renda mensal: %d\n", matriz[i][3]);

                        encontrado = 1;
                    }
                }
                
            } 
            if(encontrado == 0){
                printf("Usuario nao encontrado!");
            }
            
        }else if(opcao == 3){
            printf("Saindo do programa...");

        }else{
            printf("Opcao invalida!");
        }
    }while (opcao != 3);

    return 0;
}