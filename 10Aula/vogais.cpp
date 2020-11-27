/*  Programa para mostrar a quantidade de vogais em uma palavra
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
    int cont = 0;
    
    cin >> a;

    for (int i = 0; i < strlen(a); i++)
    {
        a[i] = tolower(a[i]);

        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' )
        {
            cont++;
        }
    }
    cout << static_cast<int>((static_cast<double>(100 * cont)/ strlen(a)) + 0.5) << "%" << endl;
    return 0;
}
