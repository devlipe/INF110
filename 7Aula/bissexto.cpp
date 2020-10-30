/*  Programa que determina qual ano e bissexto
    Felipe P Ferreira 
    30/10/2020
*/

#include<iostream>
using namespace std;

bool bissexto (int n)
{
    bool t = false;

    if (n%400 == 0)
    {
        t = true;
        return t;
    }
    else if (n%4 == 0 && n%100 != 0)
    {
        t = true;
    }
    return t;
}

int main()
{
    int ano[100];
    int i = 0;

    while (true)
    {
        cin >> ano[i];
        if (ano[i] < 0)
        {
            break;
        }
        i++;
    }
    for ( int j = 0; j < i ; j++)
    {
        if (bissexto(ano[j]))
        {
            cout << "bissexto\n";
        }
        else
        {
            cout << "nao bissexto\n";
        }
    }
    return 0;
}
