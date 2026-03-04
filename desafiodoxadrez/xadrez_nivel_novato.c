#include <stdio.h>

int main(){

    int Torre, Bispo, Rainha; 
    int movtorre = 1, movbispo = -1;

    printf("==Movimentacoes de Xadrez==\n\n"); 
    printf("Movimentacao da Torre!\n"); //informando antes do loop que a movimentacao ira ocorrer ( para nao repetir tudo )

        while (movtorre <= 3)
         {
            printf("Esquerda*\n");
            movtorre++;
         }

    printf("\n"); //pular linha
    printf("Movimentacao do Bispo!\n"); //informando antes do loop que a movimentacao ira ocorrer ( para nao repetir tudo )

        do 
         {
             printf("Cima Direita*\n");
             movbispo--;
         }   while (movbispo >= -5);

    printf("\n"); //pular linha 
    printf("Movimentacao da Rainha!\n"); //informando antes do loop que a movimentacao ira ocorrer ( para nao repetir tudo )

        for (int movrainha = 1; movrainha <= 2; movrainha++)
         {
             printf("Cima*\n");
         }
}