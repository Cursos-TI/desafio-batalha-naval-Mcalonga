#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

void diagonalE(int matriz[][10], int tamanho){
    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++){
            if(i == j){
               matriz[i][j] = 3;
            }
        }
    }
}

void diagonalD(int matriz[][10], int tamanho){
    for(int i = 10; i > 0; i--){
        for(int j = 10;j > 0; j--){
            if(i + j == 9 && tamanho < 3){
                matriz[i][j] = 3;
                tamanho + 1;
            }
        }
        
    }
}

int main() {
    int tamanho = 3;
    int tamanho2 = 0;
    int matriz[10][10] = {0};
    char letras[11] = {' ','A','B','C','D','E','F','G','H','I','J'};


    matriz[2][3]= 3;
    matriz[2][4]= 3;
    matriz[2][5]= 3;

    matriz[6][3]= 3;
    matriz[7][3]= 3;
    matriz[8][3]= 3;
    
    diagonalE(matriz, tamanho);
    diagonalD(matriz, tamanho2);

    for(int n = 0; n < 11; n++){
        printf("%c ",letras[n]);
    }

    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ",i+1);
        for (int j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
