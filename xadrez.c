#include <stdio.h>

int main(){


// MOVIMENTO DA TORRE EM FOR
// NIVEL NOVATO

int casasTorre = 5;
    printf("Movimento da Torre: \n");
    
for (int i = 1; i <= casasTorre; i++)
{
    printf("Direita\n"); // MOVIMENTO DA TORRE EM LINHA RETA
}

// MOVIMENTO DO BISPO EM WHILE

int casasBispo = 5;
int contadorBispo = 1;
    printf("\nMovimento do Bispo: \n");

while(contadorBispo <= casasBispo)
{
    printf("Cima, Direita\n"); // MOVIMENTO DO BISPO EM DIAGONAL
    contadorBispo++;
}

// MOVIMENTO RAINHA EM DO

int casasRainha = 8;
int contadorRainha = 1;
    printf("\nMovimento Rainha: \n");
do 
{
    printf("Esquerda\n"); // MOVIMENTO DA RAINHA EM TODAS AS DIREÇÕES
    contadorRainha++;
}   while (contadorRainha <= casasRainha);

// NIVEL INTERMEDIARIO
// MOVIMENTO DAS PEÇAS
    printf("\nMovimento das peças: \n");
    printf("Cima\n");
    printf("Direita\n");
    printf("Baixo\n");
    printf("Esquerda\n");

    printf("\n");

// MOVIMENTO DO CAVALO: 2 PARA BAIXO E 1 PARA ESQUERDA
int movimentobaixo = 2;
int movimentoesquerda = 1;
    printf("Movimento do Cavalo: \n");

// LOOP EXTERNO: MOVIMENTO PARA BAIXO EM FOR
for(int i = 0; i < movimentobaixo; i++){
    printf("Baixo\n");

// LOOP INTERNO: MOVIMENTO PARA ESQUERDA EM WHILE
int j = 0;
while(j <movimentoesquerda && i == movimentobaixo - 1){
    printf("Esquerda\n");
    j++;
    }
   
}

    return 0;
}