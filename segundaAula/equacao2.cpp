/*  Programa para calcular raizes da equacao
    Felipe Pereira Ferreira
    11/09/2020
*/
#include<iomanip>
#include<iostream>
#include<cmath>
using namespace std;

int main(void) 
{
    double a = 0, b = 0, c = 0;
    double delta = 0 ;
    double raizmais = 0, raizmenos = 0; //declarando e inicializando as variaveis

    cin >> a >> b >> c ;

    delta = (b * b) - (4 * a *c);// calculo de delta

    raizmais = (-b + sqrt(delta))/ (2 * a);
    raizmenos = (-b - sqrt(delta))/ (2 * a);

    cout << fixed << setprecision(4) << raizmais <<" "<< raizmenos << endl ; // mostrando resultados

    return 0;
}