/*  Programa para checar se dois numeros sao inversos
    Coio Oliveira Almeida
    09/12/2020
*/

#include <stdio.h>
#include <string.h>


void inverte(char d[], int n)
{
    int i = 0, temp = 0 ;
    int c = n-1;
    for ( i = 0; i < n/2; i++)
    {
        temp = d[i];
        d[i] = d[(c)-i];
        d[(c)-i] = temp;
    }
    return;
}

int main()
{
    char A[100] = {0}, B[100] = {0};
    int i = 0, teste = 0;

    do
    {   
        teste = 0;
        for ( i = 0; i < 100; i++)
        {
            A[i] = 0;
            B[i] = 0;
        }
        
        scanf("%s", A);
        scanf("%s", B);

        for ( i = 0; i < strlen(A); i++)
        {
           teste += A[i];
        }

        teste = teste%48;
        inverte(B, strlen(B));

        if (strcmp(A,B) == 0 && teste != 0)
        {
            printf("espelho\n");
        }
        else if (teste != 0)
        {
            printf("nao espelho\n");
        }
    } while (teste != 0);

    return 0;
}
