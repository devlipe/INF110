/*  Programa para mostrar a sequencia de fibonacci
    Felipe P Ferreira
    25/09/2020
*/

#include<iostream>
using namespace std;

int main(void)
{
    long long int fn = 0, f1 = 1, f_old = 0;
    int i = 0, numero = 0; //inicializando as variaveis

    cin >> numero;

    for ( i = 0 ; i < numero ; i++)
    {
        f_old = fn;
        fn = fn + f1;
        f1 = f_old;
    }
    
    cout << fn << endl;

    return 0;
}
