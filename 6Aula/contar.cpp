/*  Lista de numeros qual numero e maior ou igual a X
    Felipe P Ferreira
    09/10/2020
*/
#include<iostream>
using namespace std;

int main(void)
{
    int n = 0;

    cin >> n;

    int N[n] = {0};
    int M = 0, a = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> N[i];
    }
    cin >> M;

    for (int i = 0; i < n; i++)
    {
        if(N[i] >= M)
        {
            a++;
        }
    }
    cout << a << endl;
    
    return 0;
}
