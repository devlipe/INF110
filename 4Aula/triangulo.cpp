/*  Programa para criar um triangulo com asteriscos
    Felipe P Ferreira
    28/09/2020
*/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 0;

    cin >> n;

    for ( int i = 1 ; i <= n; i++)
    {
         for ( int j = 1; j <= i; j++) //para fazer descendente mudar a condicao do j para n +1 -i
         {
             cout << "*";
         }
         cout << endl;
    }
    
    return 0;
}
