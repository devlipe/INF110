#include <iostream>
#include <cmath>
using namespace std;

double somatoria(double x, double t, double wi[], int n)
{
    double m = 0.0;
    m += ((x * wi[0]) * (t * wi[1]));
    return m;
}

double ativacao(double z)
{
    int sig = 0;
    sig = 1 / (1 + exp(-z));
    if (sig > 0.5)
        return 1;
    else
        return 0;
}

void treino(double w[])
{
    double ativa = 0.0, erro = 0.0, z = 0;
    double x[2][10] = {{2.7, 1.5, 5.5, 3.5, 3.1, 7.6, 1.5, 6.9, 8.6, 7.66},
                       {10.5, 11.8, 20.0, 15.2, 14.5, 14.5, 3.5, 8.5, 2.0, 3.5}};
    double y[10] = {0, 0, 0, 0, 0, 1, 1, 1, 1, 1};

    for (int i = 0; i < 1000; i++)
    {
        for (int p = 0; p < 10; p++)
        {
            z = (somatoria(x[0][p], x[1][p], w, 2));
            ativa = ativacao(z);
            erro = (y[p] - (ativa));
            w[0] = (w[0] + 0.1 * erro * (ativa * (1 - ativa) * x[0][p]));
            w[1] = (w[1] + 0.1 * erro * (ativa * (1 - ativa) * x[1][p]));
        }
    }
}

int main()
{
    double w[2] = {0.5, 0.5};
    double a[2] = {0};
    cin >> a[0] >> a[1];
    double soma = 0.0, sigma = 0;
    treino(w);
    soma = somatoria(a[0], a[1], w, 2);
    sigma = ativacao(soma);
    cout << sigma;

    return 0;
}