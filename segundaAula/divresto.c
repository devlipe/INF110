/*  Programa para calcular a divisao e o resto da div
    Felipe Pereira Ferreira
    11/09/2020
*/
#include<stdio.h>

int main(void) 
{
    int a = 0, b = 0; //inicializar as variaveis
    int resultado = 0, resto = 0;

    scanf("%d%d", &a, &b);// buscar as variaveis

    resultado = a / b;
    resto = a % b;

    printf("%d %d\n", resultado, resto);// mostrar resultado


    return 0;
}