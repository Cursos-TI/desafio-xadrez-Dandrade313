#include <stdio.h>
//Declarando a funçao dos Movimentos
void movimentoTorre(int t){
    if(t>0){
        printf("Direita\n");
        movimentoTorre(t-1);
    }
}
void movimentoBispo(int b){
    if(b>0){
        for(int bispoD=0;bispoD<1;bispoD++){
            for(int bispoC=0;bispoC<1;bispoC++){
                printf("Cima,");
            }
            printf("Direita\n");
        }
        movimentoBispo(b-1);
    }
}

void movimentoRainha(int r){
    if(r>0){
        printf("Esquerda\n");
        movimentoRainha(r-1);
    }
}

int main()
{
 //Movimento da Torre 5 casa para direita
 printf("Movimentacao da Torre:\n");
 int torre=5;
 movimentoTorre(torre);

//Movimento do Bispo 5 casas para diagonal
 printf("Movimentacao do Bispo:\n");
int Bispo=5;
movimentoBispo(Bispo);

//Movimento da Rainha 8 casa para esquerda
printf("Movimentaçao da Rainha:\n");
int Rainha=8;
movimentoRainha(Rainha);
// Movimento do cavalo
printf("Movimento do cavalo\n");
int cavaloE,cavaloB;
for(cavaloE=0,cavaloB=0;cavaloE<=1;cavaloE++,cavaloB = 0){
    for (; cavaloB < 2; cavaloB++)
    {
        printf("cima\n");
    }
    printf("direita\n");
}

}

