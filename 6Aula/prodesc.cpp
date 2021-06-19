/*  Programa para calcular o programa o produto escalar de dois vetores
    Felipe P Ferreira
    09/10/2020
*/
#include<iostream>
using namespace std;

int main()
{
    int n = 0;
    
    cin >> n;

    int A[n]={0};
    int B[n]={0};
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }

    for (int i = 0; i < n; i++)
    {
        total += (A[i] * B[i]);
    }

    cout << total << endl;
        
    return 0;
}
