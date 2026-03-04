#include <stdio.h>

    void movertorre(int casas){
        if (casas > 0){
            printf("Direita\n");
            movertorre(casas - 1);
        }
    }

    void moverbispo(int casas){
        if (casas > 0){
            printf("Cima\n");
            moverbispo(casas - 1);
        }
    }

    void moverbispoesquerda(int casas){
        if (casas > 0){
            printf("Esquerda\n");
            moverbispoesquerda(casas - 1);
        }
    }

    void moverrainha(int casas){
        if (casas > 0){
            printf("Esquerda\n");
            moverrainha(casas - 1);
        }
    }

int main(){

    int Bispo;

    printf("==Movimentacoes de Xadrez==\n\n"); 
    printf("Movimentacao da Torre!\n"); 

        movertorre(5); // quando eu uso essa recursividade, eu chamo ela 5 vezes, executando 5 vezes o que tem nela

    printf("\n"); //pular linha
    printf("Movimentacao do Bispo!\n"); 

        for (int movbispo = 1, Bispo = 1; Bispo <= 5; Bispo++)
        {
            moverbispo(1);

            for (movbispo; movbispo <= Bispo; movbispo++) //acompanhar variavel Bispo para executar 5 vezes
            {
            moverbispoesquerda(1);
            continue;
            }
        }

    printf("\n"); 
    printf("Movimentacao da Rainha!\n"); 

        moverrainha(8);

    printf("\n");
    printf("Movimentacao do Cavalo!!\n"); 

         /* o que acontece no loop da movimentacao do cavalo e o seguinte:
         primeiramente ele executa o loop movcavalo com valor 0 e movcavalo2 com valor 1 e ignorado porque o movcavalo2 so pode executar se 
         movcavalo2 for menor ou igual ao movcavalo
         pos a segunda execucao o movcavalo tem o valor de 1 pos incremento, ja o movcavalo2 tem o valor igual, entao executa
         ficando assim 2 movimentacao pra cima e uma para a direita */

        for (int movcavalo2 = 1, movcavalo = 0; movcavalo <= 1; movcavalo++)
        {
            printf("Cima\n");
        
            for (movcavalo2; movcavalo2 <= movcavalo; movcavalo2++)
            {
                printf("Direita\n");
            }
           
        }
}