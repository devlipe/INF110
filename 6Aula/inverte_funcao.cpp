/*  Programa que por meio de uma funcao inverte os valores de uma array
    Felipe P Ferreira 
    29/10/2020
*/

#include<iostream>
using namespace std;

void inverte(int d[], int n)
{
    int i = 0, temp = 0 ;
    int c = n-1;
    for ( i = 0; i < n/2; i++)
    {
        temp = d[i];
        d[i] = d[(c)-i];
        d[(c)-i] = temp;
    }
    return;
}

int main()
{
    int n = 0;
    
    cout << "\nQuantos numeros serao lidos?\n";
    cin >> n;

    int d[n] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    
    inverte(d, n);
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        cout << d[i] << endl;
    }

    return 0;
}
