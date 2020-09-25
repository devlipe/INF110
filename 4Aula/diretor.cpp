/*  Programa para votacao no cce
    Felipe P Ferreira
    25/09/2020
*/
#include<iostream>
using namespace std;

int main(void)
{
    int c = 0, d = 0, e = 0, r = 0, t = 0, votos = 0;
    double media = 0;
    char voto;

    while (voto != 'X')
    {
        cin >> voto;

        if(voto == 'C')
        {
            c++;
        }
        if(voto == 'D')
        {
            d++;
        }
        if(voto == 'E')
        {
            e++;
        }
        if(voto == 'R')
        {
            r++;
        }
        if(voto == 'T')
        {
            t++;
        }
        votos++;
    }

    media = ((votos - 1)/2.0); // a media representa 50% dos votos
    
    if (c > media || d > media || e > media || r > media || t > media)
    {
        cout << "SIM\n";
    }
    else
    {
        cout << "NAO\n";
    }
    
    return 0;
}
