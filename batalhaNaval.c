#define tam 10
#include <stdio.h>
#include <stdlib.h>



void diagonalE(int matriz[][tam], int tamanho){  //função para criar o navio na diagonal
    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++){
            if(i == j){
               matriz[i][j] = 3;
            }
        }
    }
}

void diagonalD(int matriz[][tam]){       //função para criar o navio na anti diagonal
    int contador = 0;
    while (contador < 3){
        for(int i = 0; i < 10; i++){
            int j = 10 - 1 - i;
            if (contador < 3) {
                matriz[i][j] = 3;
                contador++;}
        }
        
    }
}

void cruz(int matriz[tam][tam],int linCentral,int colCentral){  //função para habilidade de cruz
    for(int i = 0; i <tam; i++){
        for(int j = 0; j<tam; j++){
            int linhap = abs(i - linCentral);
            int colp = abs(j - colCentral);
            if(linhap + colp == 0){
                matriz[i][j] = 5;
            }
            else if(linhap<=1 && colp <=0 ){
                matriz[i][j] = 5;
            }
            else if(linhap<=2 && colp <=0 ){
                matriz[i][j] = 5;
            }
            else if(linhap<=0 && colp <=1 ){
                matriz[i][j] = 5;
            }
            else if(linhap<=0 && colp <=2 ){
                matriz[i][j] = 5;
            }

        }
    }
}

void octa(int matriz[tam][tam],int linCentral,int colCentral){ //definindo função pro octaedro
    for(int i = 0; i <tam; i++){
        for(int j = 0; j<tam; j++){
            int linhap = abs(i - linCentral); 
            int colp = abs(j - colCentral);
            if(linhap + colp == 0) { 
                matriz[i][j] = 5;
            }
            else if(linhap + colp <= 1) {  
                matriz[i][j] = 5;
            }

          
        }
    }

}
void coneD(int matriz[tam][tam], int topLinha, int topColuna) {  //definindo função para o cone
    for(int i = 0; i < tam; i++) {
        for(int j = 0; j < tam; j++) {
            int altura = i - topLinha; //define variavel com altura inicial para rodar o cone
                     
            if(altura >= 0) { //apenas se o valor da altura inicial for maior que zero a condição para iniciar é ativada
                
                if(abs(j - topColuna) <= altura && altura <= 2) {
                    matriz[i][j] = 5;   
                }
            }
        }
    }
}


int main() {
    int tamanho = 3;
    int tamanho2 = 0;
    int matriz[10][10] = {0};
    int matriz2[10][10] = {0};
    char letras[11] = {' ','A','B','C','D','E','F','G','H','I','J'};


    matriz[2][3]= 3;  // posicionamento de 2 navios
    matriz[2][4]= 3;
    matriz[2][5]= 3;

    matriz[6][3]= 3;
    matriz[7][3]= 3;
    matriz[8][3]= 3;
    
    diagonalE(matriz, tamanho); 
    diagonalD(matriz);
    coneD(matriz2,5,6); //habilidades com os numeros que definem a posição que a pessoa escolhe para cairem
    octa(matriz2,2,2);
    cruz(matriz2,2,7);





    for(int n = 0; n < 11; n++){    //inicio do codigo que exibe a matriz
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

    for(int n = 0; n < 11; n++){    //inicio do codigo que exibe a segunda matriz pra melhor representar as habilidades
        printf("%c ",letras[n]);
    }

    printf("\n");           
    for (int i = 0; i < 10; i++) {
        printf("%d ",i+1);
        for (int j = 0; j < 10; j++) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
