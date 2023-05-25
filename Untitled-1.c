#include <stdio.h>
void main (){
    int votos[10] = {0}, i = 0, candidatoVoto=0, vencedor = 0, votosVencedor = 0;

    printf("\nInforme o codigo do candidato ou um numero negativo para sair.\n");
    do {
        scanf("%d\n", &candidatoVoto);
        votos[candidatoVoto]++;
    } while(candidatoVoto >= 0);

    i = 0;

    do {
        if(votos[i] > votosVencedor) {
            vencedor = i;
            votosVencedor = votos[i];
        }
        i++;
    }while(i<10);

    i = 0;
    
    printf("\nResultado da apuração.\n");
    do {
        printf("Candiadto %d: %d votos \n", i, votos[i]);
        i++;
    } while(i<10);

    printf("O vencedor foi o candidato %d com %d votos", vencedor, votosVencedor);
}
