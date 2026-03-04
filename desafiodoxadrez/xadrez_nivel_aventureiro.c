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

    printf("\n"); //pular linha
    printf("Movimentacao do Cavalo!!\n"); //informando antes do loop que a movimentacao ira ocorrer ( para nao repetir tudo )

         /* o que acontece no loop da movimentacao do cavalo e o seguinte:
         primeiramente ele executa o loop movcavalo com valor 0 e movcavalo2 com valor 1 e ignorado porque o movcavalo2 so pode executar se 
         movcavalo2 for menor ou igual ao movcavalo
         pos a segunda execucao o movcavalo tem o valor de 1 pos incremento, ja o movcavalo2 tem o valor igual, entao executa
         ficando assim 2 movimentacao pra baixo e 1 para a esquerda */

        for (int movcavalo = 0; movcavalo <= 1; movcavalo++)
        {
            printf("Baixo*\n");

            for (int movcavalo2 = 1; movcavalo2 <= movcavalo; movcavalo2++)
            {
                printf("Esquerda*\n");
            }

        }
}