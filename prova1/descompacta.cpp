/*  Programa para criar um compactador de arquivos 
    Felipe P Ferreira
    16/10/2020
*/

#include <iostream>
using namespace std;

int main()
{
    int repeticao[50] = {0};
    char letra;

    for (int i = 0; i < 50; i++)
    {
        cin >> repeticao[i] >> letra;
        for (int p = 0; p < repeticao[i]; p++)
        {
            cout << letra;
        }
        if (repeticao[i] == 0)
            break;
    }
    cout << "." << endl;

    return 0;
}

