/*  programa que, dado um numero natural N, determine se ele e ou nao um numero perfeito.
    Felipe P Ferreira 
    2/10/2020
*/
#include<iostream>
using namespace std;

int main(void)
{
    int N = 0, i = 0, sum = 0;
    
    cin >> N;

    for ( i = 1; i <= N/2 ; i++)
    {
        if (N%i==0)
        {
            sum += i;
        }
    }
    if (sum == N)
    {
        cout << "SIM\n";
    }
    else
    {
        cout << "NAO\n";
    }
    
    return 0;
}

