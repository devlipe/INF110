/*  Programa para verificacao se uma palavra e um palindrome
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
    char temp[31];
    bool certo = true;
    
    cin >> a;

   for(int i = 0; i < strlen(a) / 2; i++)
    {
        if(a[i] != a[(strlen(a) - 1) - i])
        {
            certo = false;
        }
    }
    
    if (certo)
    {
        cout << "PALINDROMO\n";
    }
    else
    {
        cout << "NAO\n";
    }
    return 0;
}
