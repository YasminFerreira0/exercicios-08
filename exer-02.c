#include <stdio.h>
void main ()
/*Devido às confusões dos programadores do TRE, a Justiça Eleitoral resolveu
contratá-lo para realizar a apuração das eleições.
Faça um programa que leia o código dos candidatos e informe o número de votos
recebidos por cada um, bem como o candidato mais votado.
Você sabe que 10 candidatos disputam uma vaga. E que a entrada termina assim
que for lido um candidato de código negativo.
    Exemplo:
    Entrada: 0 0 1 2 0 2 -1 
    Saída: 0 3 votos
    1 1 voto
    2 2 votos
    O candidato 0 foi eleito.*/
{
    int candidatos, codigo, votos[candidatos], i, eleito;
    candidatos = 0;
    eleito = 0;

    do{
        printf("\nInforme o codigo do candidato ou um numero negativo para sair: ");
        scanf("%d", &codigo);

        if (codigo >= 1 && codigo <= candidatos){
            votos[codigo - 1]++;
        }

    }while(codigo<0);

    printf("\nResultado da apuração: \n");
    for (i=0; i<candidatos; i++){
        printf("candidato %d: %d votos.\n", i +1, votos[i]);
    }
    for (i=0; i<candidatos; i++) {
        if (votos[i]> votos[eleito]){
            eleito = i;
        }
    }
    printf("\nO candidato eleito foi %d.\n", eleito + 1);

}
