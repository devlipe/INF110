/*  programa deve determinar se existem dois elementos em posicoes distintas da lista cuja soma seja exatamente igual a um determinado valor X
    Felipe P Ferreira
    06/11/2020
*/

#include <iostream>
using namespace std;

void ler (int lista[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        cin >> lista[i];
    }
}
bool comparador (int a[], int sz, int soma)
{
    for (int i = 0; i < sz; i++)
    {
        for (int j = i+1; j < sz; j++)
        {
            if ((a[i] + a[j]) == soma)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int size = 0, soma = 0;
    
    cin >> size;

    int lista[size] = {0};
    ler(lista, size);
    cin >> soma;

    if (comparador(lista, size, soma))
    {
        cout << "SIM\n";
    }
    else
    {
        cout << "NAO\n";
    }
    
    return 0;
}
