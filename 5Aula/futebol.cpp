/*  Faca um programa para testar esta regra com diferentes limites de diferentes idades.
    Felipe P Ferreira
    02/10/2020
*/
#include<iostream>
using namespace std;

int main(void)
{
    int N = 0, I = 0, L = 0, i =0, maior_idade = 0, idades = 0;

    cin >> N >> I >> L;
    for ( i = 0; i < N; i++)
    {
        cin >> idades;
        if (idades >= I)
        {
            maior_idade++;
        }
    }
    if (maior_idade > L)
    {
        cout << "Nao aceito.\n";
    }
    else
    {
        cout << "Aceito.\n";
    }    
    
    return 0;
}

