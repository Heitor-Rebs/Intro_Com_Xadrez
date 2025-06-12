#include <stdio.h>

/* Criando as funções de recursividade para a torre, bispo e rainha */
void torre(int i){
    if  (i>0){
        printf("Direita\n");
        torre(i-1);
    }
}

void bispo(int i){
    if  (i>0){
        printf("Cima, Direita\n");
        bispo(i-1);
    }
}

void rainha(int i){
    if  (i>0){
        printf("Esquerda\n");
        rainha(i-1);
    }
}

int main(){
    /* Declarando variáveis */
    int i = 0, j = 0;



    /* Mostrando movimento da torre */
    printf("Movimentos da torre\n");
    torre(5);

    /* Zerando variável i, para reutilizar no loop */
    i = 0;

    /* Mostrando movimento do bispo */
    printf("\nMovimentos do bispo\n");
    bispo(5);

    i = 0;

    /* Mostrando movimento da rainha */
    printf("\nMovimentos da rainha\n");
    rainha(8);

    i = 0;

    /* Mostrando movimento do cavalo */
    printf("\n------------------------\n");
    printf("Movimentos do cavalo\n");
    do{
        for(j=0;j<2;j++){
            printf("Cima\n");
        }
        printf("Direita\n");
        i++;
    }while(i<1);

    i = 0;
    j = 0;

    /* Mostrando movimento do bispo com loop aninhado */
    printf("\n------------------------\n");
    printf("Movimentos do bispo\n");
    for(i=0; i<5;i++){
        printf("Cima\n");
        for(j=0;j<=5;j++){
            /* Usando if, para apenas mostrar o movimento para direita uma vez para cada movimento para baixo */
            if(i==j){
                printf("Direita\n");
            }
        }
    }

}
