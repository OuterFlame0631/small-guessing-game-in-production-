#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*OBJETIVO*/
/*
Criar jogo de adivinhação, no qual o usuário irá competir com a máquina para descobrir quem chega mais próximo do número randomizado
*/

int main () {

int opcao, palpite, numeroSecreto, cpu = 0, player = 0;

    srand(time(0));
    numeroSecreto = rand() % 100 + 1;
    cpu =  rand() % 3, 100;

printf("Bem vindo ao Jogo de adivinhação\n");
do
{
printf("Opção 1: Jogar\n");
printf("Opção 2: Sair\n");
printf("Escolha: ");
scanf("%d", &opcao);

switch (opcao)
{
case 1:
    printf("Escolha:\n");
    printf("Opção 1: Maior que o Número Secreto\n");
    printf("Opção 2: Igual que o Número Secreto\n");
    printf("Opção 3: Menor que o Número Secreto\n");
    printf("Seu número será: ");
    scanf("%d", &opcao);
    
    switch (opcao)
    {
    case 1:
        printf("Opção escolhida: Maior que Número Secreto.\n");
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        printf("\n");
        printf("Número Secreto: %d\n", numeroSecreto);
        if (palpite > numeroSecreto)
        {
            printf("Você acertou!!");
            player++;
        } else {printf("Você errou!!");
            cpu++;}
    printf("\n");
    printf("Pontos do Jogador: %d\n", player);
    printf("Pontos da Máquina: %d\n", cpu);
    printf("\n");
        break;

        case 2:
        printf("Opção escolhida: Igual ao Número Secreto.\n");
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        printf("\n");
        printf("Número Secreto: %d\n", numeroSecreto);
        if (palpite = numeroSecreto)
        {
            printf("Você acertou!!");
            player++;
        } else {printf("Você errou!!");
            cpu++;}
    printf("\n");
    printf("Pontos do Jogador: %d\n", player);
    printf("Pontos da Máquina: %d\n", cpu);
    printf("\n");
        break;

        case 3:
        printf("Opção escolhida: Menor que Número Secreto.\n");
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        printf("\n");
        printf("Número Secreto: %d\n", numeroSecreto);
        if (palpite < numeroSecreto)
        {
            printf("Você acertou!!");
            player++;
        } else {printf("Você errou!!");
            cpu++;}
    printf("\n");
    printf("Pontos do Jogador: %d\n", player);
    printf("Pontos da Máquina: %d\n", cpu);
    printf("\n");
        break;
    
    default: printf("ERROR: Try again!!");
        break;
    }

    break;

case 2:
    printf("Até logo!!");
    break;

default:printf("ERROR: Try again!!");
 break;
} 



} while (player < 5 && cpu < 5); 
{
    printf("\n");
    printf("Pontos do Jogador: %d\n", player);
    printf("Pontos da Máquina: %d\n", cpu);
    printf("\n");
        if (player == 5)
        {
            printf("Você ganhou!!");
        }
        else {printf("Você perdeu!!");}
}

return 0;

}