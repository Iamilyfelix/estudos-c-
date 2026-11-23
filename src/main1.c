#include <stdio.h>
// aula 9, Q1
int main()
{
    int matriz [3][3];
    int soma = 0;
    
    printf("blabka");
    
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("[%d][%d]",i,j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j]; 
        }
    }
        printf("A soma é: %d", soma);

    return 0;
}