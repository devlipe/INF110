#include<stdio.h>

void hanoi(int n, char origem, char destino, char auxiliar)
{
    if (n==1)
    {
        printf("Mover disco %d de %c para %c\n", 1, origem, destino);
    }
    else
    {
        hanoi(n-1, origem, auxiliar, destino);
        printf("Mover disco %d de %c para %c\n", n, origem, destino);
        hanoi(n-1, auxiliar, destino, origem);
    }
}

int main()
{
    int n = 0;

    scanf("%d", &n);
    hanoi(n, 'A','B', 'C');
    return 0;
}
