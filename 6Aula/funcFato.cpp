/*  Programa com uma funcao para ler um numero e retornar o fatorial dele
    Felipe P Ferreira
    15/10/2020
*/

#include <iostream>
using namespace std;

long long int fatorial (int n)
{
    long long int fat = 1;

    for (int i = 1; i <= n; i++)
    {
        fat *= i;
    }
    return fat;
}
int main()
{
    int n = 0;
    long long int fat = 0;

    cout << "Entre o numero para ser calculado o fatorial: \n";
    cin >> n;
    fat = fatorial(n);
    cout << "O Fatorial de " << n << " e " << fat;

    return 0;
}
