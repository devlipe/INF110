/*  programa que decide onde esta um personagem
    Felipe P Ferreira
    2/10/2020
*/
#include<iostream>
using namespace std;

int main(void)
{
    int X = 0, Y = 0;

    cin >> X >> Y;

    if (X==0 && Y==0)
    {
        cout << "ORIGEM\n";
    }
    else if (X==0)
    {
        cout << "EIXO Y\n";
    }
    else if (Y==0)
    {
        cout << "EIXO X\n";
    }
    else if (X > 0 && Y > 0)
    {
        cout << "QUADRANTE 1\n";
    }
    else if (X < 0 && Y > 0)
    {
        cout << "QUADRANTE 2\n";
    }
    else if (X < 0 && Y < 0)
    {
        cout << "QUADRANTE 3\n";
    }
    else if (X > 0 && Y < 0)
    {
        cout << "QUADRANTE 4\n";
    }
    return 0;
}
