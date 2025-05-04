#include <stdio.h>

int main() {
    int peca, movimentos, direcao, repeticao = 1;


    printf("Bem vindo ao jogo de Peças de Xadrez\n");
    printf("Digite qual peça você deseja movimentar:\n");
    printf("1. Bispo \n2. Torre \n3. Rainha\n");
    scanf("%d", &peca);
    
    printf("Agora, qual direção a peça deverá ir:\n");
    printf("1. Cima \n2. Baixo \n3. Esquerda \n4. Direita\n");
    scanf("%d", &direcao);

    printf("Por último, escreva quantas casas a peça deverá andar:\n");
    scanf("%d", &movimentos);

    if(direcao >= 1 && direcao <=4){
            
        switch (peca)
        {
        case 1:
            if(direcao == 1){

                for(repeticao = 1; repeticao <= movimentos; repeticao++){
                    printf("Bispo andou para cima\n");

                }
            }else if (direcao == 2){

                for(repeticao = 1; repeticao <= movimentos; repeticao++){
                    printf("Bispo andou para baixo\n");

                }
            }else if (direcao == 3){

                for(repeticao = 1; repeticao <= movimentos; repeticao++){
                    printf("Bispo andou para esquerda\n");

                }
            } else{

                for(repeticao = 1; repeticao <= movimentos; repeticao++){
                    printf("Bispo andou para direita\n");

                }
            }
        break;

        case 2:
            if(direcao == 1){

                while (repeticao <= movimentos)
                {
                    printf("Torre andou para cima\n");
                    repeticao++;
                }
            
            }else if (direcao == 2){

                while (repeticao <= movimentos)
                {
                    printf("Torre andou para baixo\n");
                    repeticao++;
                }
            
            }else if (direcao == 3){

                while (repeticao <= movimentos)
                {
                    printf("Torre andou para esquerda\n");
                    repeticao++;
                }
            
            } else{

                while (repeticao <= movimentos)
                {
                    printf("Torre andou para direita\n");
                    repeticao++;
                }
            
        }
        break;

        case 3:
            if(direcao == 1){

                do{

                    repeticao++;
                    printf("Rainha andou para cima\n");

                } while (repeticao <= movimentos);
                
            }else if (direcao == 2){

                do{
                    
                    repeticao++;
                    printf("Rainha andou para baixo\n");

                } while (repeticao <= movimentos);

            }else if (direcao == 3){

                do{
                    
                    repeticao++;
                    printf("Rainha andou para esquerda\n");

                } while (repeticao <= movimentos);

            } else{

                do{
                    
                    repeticao++;
                    printf("Rainha andou para direita\n");

                } while (repeticao <= movimentos);
            }
            
        break;

        default:
            printf("Você selecionou uma peça inválida\n");
        break;
        }
    } else{
        printf("Você digitou uma opção inválida de direção!\n");
    }

    return 0;
}
