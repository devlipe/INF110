/*  Programa que identifica as siglas de instituicoes
    Caio Oliveira Almeida
    27/11/2020
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    char a[301];

    fgets(a, 301, stdin);

    printf("%s", a);
    for (int i = 0; i < strlen(a); i++)
    {
        if (isupper(a[i]))
        {
            printf("%c",a[i]);
        }
    }
    printf("\n");
    return 0;
}
