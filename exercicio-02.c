#include <stdio.h>
void main()
{
    int n, termo_ant, ultimo_termo, aux, i;

    termo_ant = 0;
    ultimo_termo = 1;

    printf("\nInforme o numero de termos: ");
    scanf("%d", &n);

    printf("\nSerie de Fibonacci com %d termos: ", n);

    for (i=0; i<n; i++){
        printf("%d ", ultimo_termo);

        aux = ultimo_termo;
        ultimo_termo = ultimo_termo + termo_ant;
        termo_ant = aux;

    }

    printf("\n\n");

}