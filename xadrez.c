#include <stdio.h>

int main(){

// MOVIMENTO DA TORRE EM FOR

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

    return 0;
}