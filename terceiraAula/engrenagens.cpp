/*  Programa para calcular as engrenagens
    Felipe P Ferreira
    18/09/2020
*/
#include <iostream>
using namespace std;

int main(void)
{
    int eng1 = 0 , eng2 = 0, div = 0;

    cin >> eng1 >> eng2;

    div = eng2%eng1;
    if (div == 0)
    {
        cout << "\n1\n";
    }
    else
    {
        cout << "\n0\n";
    }
    
    return 0;
}
