#include <stdio.h>

int main(){
    /* Declarando variáveis */
    int i = 0, j = 0;

    /* Mostrando movimento da torre */
    printf("Movimentos da torre\n");
    for(i=0;i<5;i++){
        printf("Direita\n");
    }

    /* Zerando variável i, para reutilizar no loop */
    i = 0;

    /* Mostrando movimento do bispo */
    printf("\nMovimentos do bispo\n");
    while(i<5){
        printf("Cima, Direita\n");
        i++;
    }

    i = 0;

    /* Mostrando movimento da rainha */
    printf("\nMovimentos da rainha\n");
    do{
        printf("Esquerda\n");
        i++;
    }while(i<8);

    i = 0;

    /* Mostrando movimento do cavalo */
    printf("\n------------------------\n");
    printf("Movimentos do cavalo\n");
    do{
        for(j=0;j<2;j++){
            printf("Baixo\n");
        }
        printf("Esquerda\n");
        i++;
    }while(i<1);
}
