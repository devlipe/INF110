/*  Programa para mostrar se uma senha e segura ou nao
    Felipe P Ferreira
    27/11/2020
*/

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
    char a[31];
    bool digito = false, maiusculas = false, minusculas = false, especial = false; 
    int n = 0;
    cin >> a;

    for (int i = 0; i < strlen(a); i++)
    {
        if (islower(a[i]))
        {
            minusculas = true;
        }
        else if (isupper(a[i]))
        {
            maiusculas = true;
        }
        else if (isdigit(a[i]))
        {
            digito = true;
        }
        else if (!isalnum(a[i]))
        {
            especial = true;
        }
    }

    if (digito)
    {
        n++;
    }
    if (maiusculas)
    {
        n++;
    }
    if (minusculas)
    {
        n++;
    }
    if (especial)
    {
        n++;
    }

    if (n == 4)
    {
        cout << "segura\n";
    }
    else if (n == 1)
    {
        cout << "fraca\n";
    }
    else
    {
        cout << "media\n";
    }
    return 0;
}
