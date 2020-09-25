/*  Programa para calcular o valor medio entre dois inteiros
    Felipe P Ferreira
    24/09/2020
*/

#include<iostream>
using namespace std;

int main(void)
{
    int a = 0, b = 0;

    cin >> a >> b;
    if ((a - b)%2 == 0)
    {
        cout << (a + b)/2;
        cout << "Tudo bem?";
    }
    else
    {
        cout << "Nao existe valor medio inteiro";
    }
    
    return 0;
}
