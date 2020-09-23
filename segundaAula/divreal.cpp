/*  Programa para calcular a divisao real com duas casas decimais
    Felipe Pereira Ferrreia
    11/09/2020
*/
#include<iostream>
#include<iomanip>
using namespace std;
//incluindo bibliotecas necessarias

int main(void) 
{
    double a = 0, b = 0;// inicializando variaveis
    double resultado = 0;

    cin >> a >> b ;

    resultado = a / b ; // fazendo calculos

    cout << fixed << setprecision(2) << resultado << endl; // mostrando resultados

    return 0;
}