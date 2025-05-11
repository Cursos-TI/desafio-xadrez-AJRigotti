#include <stdio.h>

void movimento_torre(casas){
    if(casas > 0)
    {
    printf("Torre andou para Direita \n");
    movimento_torre(casas - 1);
    }
}


void movimento_bispo(casas){
    if(casas > 0)
    {
    printf("Bispo andou para Direita \n");
    printf("Bispo andou para Direita \n");
    movimento_torre(casas - 1);
    }
}

void movimento_rainha(casas){
    if(casas > 0)
    {
    printf("Rainha andou para Esquerda \n");
    movimento_torre(casas - 1);
    }
}


int main(){

    int escolha_pecas , i =1;

    printf("Bem vindo ao jogo de Peças de Xadrez\n");
    printf("Selecione a peça que será movimentada\n");
    printf("1. Bispo\n2. Torre\n3. Rainha\n4. Cavalo\n");
    scanf("%d", &escolha_pecas);

    switch (escolha_pecas)
    {

    case 1:
        movimento_bispo(5);
    break;
    

    case 2:
        movimento_torre(5);
    break;


    case 3:
        movimento_rainha(8);
    break;


    case 4:
        for(i; i < 2; i++)
        {
            int j = 0;

            while (j < 2)
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