/*  Programa para calcular se o numero e impar ou par
    Felipe Pereira Ferreia
    14/09/2020
*/
#include <iostream>
using namespace std;

int main(void)
{
    int numero;

    cout << "Digite o numero:";
    cin >> numero;

    if (numero%2 == 0)
    {
        cout << "Ele e par";
            }
    else
    {
        cout << "Ele e impar";
    }
    
    return 0;
}
