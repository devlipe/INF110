/*  Programa para calcular a interseccao de dois conjuntos
    Felipe P Ferreira
    09/10/2020
*/
#include<iostream>
using namespace std;

int main(void)
{
    int N = 0, M = 0;

    cin >> N >> M ;

    int A[N] = {0};
    int B[M] = {0};

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < M; i++)
    {
        cin >> B[i];
    }

    cout << "{";

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (A[i] == B[j])
            {
                cout << A[i] << " ";
            }
        }
    }
    cout << "}\n";
    
    return 0;
}
