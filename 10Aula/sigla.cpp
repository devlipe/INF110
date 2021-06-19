/*  Programa que identifica as siglas de instituicoes
    Felipe P Ferreira
    27/11/2020
*/

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
    char a[201];

    cin.getline(a, 201);

    for (int i = 0; i < strlen(a); i++)
    {
        if (isupper(a[i]))
        {
            cout << a[i];
        }
    }
    cout << endl;
    return 0;
}
