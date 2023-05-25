#include <stdio.h>
void main (){
    int votos[10] = {0}, i = 0, candidatoVoto=0, vencedor = 0, votosVencedor = 0;

    do {
        scanf("%d", &candidatoVoto);
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
    
    do {
        printf("Candiadto %d: %d votos \n", i, votos[i]);
        i++;
    } while(i<10);

    printf("O vencedor foi o candidato %d com %d votos", vencedor, votosVencedor);
}
