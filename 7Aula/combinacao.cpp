/*  Programa para mostrar a combinacoes de uma turma
    Felipe P Ferreira
    30/10/2020
*/

#include<iostream>
using namespace std;

// calcular o fatorial
long long int  fatorial (int x)
{
    long long int fat = 1;

    for (int i = 2; i <= x; i++)
    {
        fat *= i;
    }
    return fat;
}

int main()
{
    int N = 0, K = 0;
    long long int fat = 0;

    cin >> N >> K;
    
    fat = (fatorial(N))/ (fatorial(K) * fatorial(N-K));

    cout << fat << endl;
    
    return 0;
}
