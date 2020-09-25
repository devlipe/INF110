 /*  Programa para calcular volume da lata
    Felipe Pereira Ferreia
    11/09/2020
 */
#include<iostream>
#include<iomanip>
using namespace std;

int main(void) 
{
    double r = 0, a = 0, PI = 3.1415;
    double resultado = 0; // inicializando as variaveis

    cin >> r >> a ;

    resultado =  (PI * r *r) * a; //calculando o volume

    cout << fixed << setprecision(2) << resultado << endl ; // mostrando resultados

    return 0;
}