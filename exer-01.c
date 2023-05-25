#include <stdio.h>
void main ()
/*Faça um programa que preencha dois vetores, A e B, com vinte caracteres cada. A
seguir, troque o 1o elemento de A com o 20o de B, o 2o de A com o 19o de B, e
assim por diante, até trocar o 20o de A com o 1o de B. Mostre os vetores antes e
depois da troca.*/

{
    char A[20], B[20], aux;
    int i, j;

    printf("Informe um valor para A: \n");
    for (i=0;i<20;i++){
        printf("%d%c caracter: ", i+1, 167);
        fflush(stdin);
        scanf("%c", &A[i]);
    }

    printf("Informe um valor para B: \n");
    for (j=0;j<20;j++){
        printf("%d%c caracter: ", j+1, 167);
        fflush(stdin);
        scanf("%c", &B[j]);
    }

    printf("\nVetor A - Antes da troca\n");
    for (i=0; i<20;i++){
        printf(" %c", A[i]);
    }

    printf("\nVetor B - Antes da troca\n");
    for (j=0; j<20;j++){
        printf(" %c", B[j]);
    }

    for (i=0, j=20; i<=20; i++,j--){
        aux = A[i];
        A[i]= B[j];
        B[j] = aux;
    }
    printf("\nVetor A- depois da troca\n");
    for(i=0; i<=20;i++){
        printf(" %c", A[i]);
    }

    printf("\nVetor B - depois da troca\n");
    for (j=0; j<=20;j++){
        printf(" %c", B[j]);
    }

}
