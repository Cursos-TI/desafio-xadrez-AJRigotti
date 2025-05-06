#include <stdio.h>

int main(){

    int escolha_pecas , i =1;

    printf("Bem vindo ao jogo de Peças de Xadrez\n");
    printf("Selecione a peça que será movimentada\n");
    printf("1. Bispo\n2. Torre\n3. Rainha\n4. Cavalo\n");
    scanf("%d", &escolha_pecas);

    switch (escolha_pecas)
    {

    case 1:
        for(i; i <= 5; i++)
        {
            printf("Bispo andou para Cima e para Direita\n");
        }
    break;
    

    case 2:
        while (i <= 5)
        {
            printf("Torre andou para Direita\n");
            i++;
        }
    break;


    case 3:
        do
        {
            i++;
            printf("Rainha andou para Esquerda\n");

        } while (i <= 8);
    break;


    case 4:
        for(i; i < 2; i++)
        {
            int j = 0;

            while (j < 3)
            {
                printf("Cavalo andou para Baixo\n");
                j++;
            }
            

            printf("Cavalo andou para Esquerda \n");
        }
    break;


    default:
        printf("Opção inválida\n");
    break;
    }


    return 0;
}