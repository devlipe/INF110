/*  Programa para calcular o tempo ate a populacao de mosquitos chegar a 1 000 000
    Felipe P Ferreira
    02/10/2020
*/
#include <iostream>
using namespace std;

int main(void)
{
    long long int P = 0, G = 0, pop = 0, tempo = 0;

    cin >> P >> G;

    while (pop < 1000000000)
    {
        pop = (P * G) + P;
        P = pop;
        tempo++;
    }
    cout << tempo << endl;

    return 0;
}
