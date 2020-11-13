/*  Programa para treino de um neoronio e teste se um emprestimo deve ser concedido ou nao  
    Felipe P Ferreira
    12/11/2020
*/

#include <iostream>
#include <cmath> // Necessario para exp()
using namespace std;

double sigmoide (double z)
{
    double sig = 0.0;

    sig = 1 / (1 + exp(-z));

    return sig;
}

double somatorio (double s, double e, double wi[])
{
    double z = 0.0;
    
    z = (s * wi[0]) + (e * wi[1]);

    return z;
}

void treinamento (double w[])
{   
    const int n = 10;
    double x[2][n] = {{2.7 ,1.5 ,5.5 ,3.5 ,3.1 ,7.6 ,1.5,6.9,8.6,7.66 },{10.5,11.8,20.0,15.2,14.5,14.5,3.5,8.5,2.0,3.5 }};
    double y[n] =    {0 ,0 ,0 ,0 ,0 ,1 ,1 ,1 ,1 , 1 };
    double z = 0.0, erro = 0.0, alfa = 0.1, sgm = 0.0;

    for(int ep = 0; ep < 1000 ; ep++)
    {
        for (int ex = 0; ex < n; ex++)
        {
            z = somatorio (x[0][ex], x[1][ex], w);  // Como sao dois valores apenas eu separei em um variavel cada na funcao somatorio
            sgm = sigmoide(z);
            erro = y[ex] - sgm;
            w[0] = w[0] + alfa * erro * (sgm * ( 1 - sgm) * x[0][ex]);
            w[1] = w[1] + alfa * erro * (sgm * ( 1 - sgm) * x[1][ex]);
        }
    }
}

int main()
{   
    double  w[2] = {0.5,0.5};
    treinamento(w);   // Faz o treino do neoronio e devolve o w corrigido
    double slr = 0.0, emp = 0.0, z = 0.0, sgm = 0.0;
    
    cin >> slr >> emp;

    z = somatorio(slr, emp, w);
    sgm = sigmoide(z);

    if (sgm > 0.5)
    {
        cout << "1\n";
    }
    else
    {
        cout << "0\n";
    }
    
    return 0;
}
