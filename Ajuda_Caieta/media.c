#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n = 0;
    double media, mediana, soma = 0.0;

    scanf("%d", &n);

    int vetor[n];

    for (i = 0 ; i < n ; i++)
    {
        scanf("%d", &vetor[i]);
        
    }
    for ( i = 0; i < n; i++)
    {
        soma = soma + vetor[i];
    }
    
    media = soma/n;
    mediana = vetor[(n/2)-1];

    printf("Media: %.1f\n", media);
    printf("Mediana: %.1f\n", mediana);
    

    return 0;
}