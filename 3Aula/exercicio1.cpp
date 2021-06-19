/*  Programa para exibir a soma dos n primeiros numeros primos
    Felipe Pereira Ferreria
    21/09/2020
*/
#include<iostream>
using namespace std;

int main(void)
{
    int n = 0, sum = 0, cont = 0, numeros = 0;

    cout << "insira o valor n: ";
    cin >> n;
     
    while (cont != n)
    {
        if (numeros%2 != 0)
        {
            sum += numeros;
            cont++; 
        }
        numeros++;
    }
    
    cout << "A soma dos "<< n << " primeiros numero impares e " << sum << endl;

    return 0;
}
