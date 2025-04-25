#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
//Movimento da Torre 5 casa para direita

int Torre=0;
printf("Movimentacao da Torre:\n");
while (Torre<5)
{
    printf("Direita\n");
    Torre ++;
}

//Movimento do Bispo
 int Bispo=0;
 printf("Movimentacao do Bispo:\n");
do{
    printf("Cima,Direita\n");
    Bispo++;
}while (Bispo<5);

//Movimento da Rainha
int Rainha;
printf("Movimentaçao da Rainha:\n");
for(Rainha=0;Rainha<8;Rainha++){
    printf("Esquerda\n");
}

    // Nível Aventureiro - Movimentação do Cavalo
    printf("Movimento do cavalo\n");
int cavaloE,cavaloB;
for(cavaloE=0;cavaloE<=1;cavaloE++){
    for (cavaloB=0; cavaloB < 2; cavaloB++)
    {
        printf("baixo\n");
    }
    printf("esquerda\n");
}

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
