/*  Programa para calcular a area de um triangulo
    Felipe P Ferreira
    04/12/2020
*/

#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;


struct Ponto 
{
    int x,y;
};

double distancia (Ponto A, Ponto B)
{
    double dist;

    dist = sqrt(((B.x - A.x) * (B.x - A.x)) + ((B.y - A.y) * (B.y - A.y)));

    return dist;
}

double area (Ponto P, Ponto Q, Ponto R)
{
    double l1, l2, l3;
    double semiperimetro;
    double a;

    l1 = distancia (P, Q);
    l2 = distancia (P, R);
    l3 = distancia (Q, R);

    semiperimetro = (l1 + l2 + l3) / 2;

    a = sqrt (semiperimetro * (semiperimetro - l1) * (semiperimetro - l2) * (semiperimetro - l3));

    return a;
}

int main()
{
    Ponto a, b, c;

    cin >> a.x >> a.y;    
    cin >> b.x >> b.y;    
    cin >> c.x >> c.y;

    cout << fixed << setprecision(2) << area(a,b,c) << endl;
    return 0;
}
