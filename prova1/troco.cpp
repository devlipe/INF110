/*  Programa para ajudar o louco do capivaristo
    Felipe P Ferreira  
    16/10/2020
*/

#include<iostream>
using namespace std;

int main()
{
    int valor = 0, count = 0;
    int a = 0, b = 0, c = 0;

    cin >> valor >> a >> b >> c;

    if (valor%a ==0)
    {
        while (valor != 0)
        {
            valor = valor - a;
            count++;
        }
        cout << count << " doces de " << a << " reais\n";
        
    } 
    else if (valor%b ==0)
    {
         while (valor != 0)
        {
            valor = valor - b;
            count++;
        }
        cout << count << " doces de " << b << " reais\n";
    } 
    else if (valor%c ==0)
    {
        while (valor != 0)
        {
            valor = valor - c;
            count++;
        }
        cout << count << " doces de " << c << " reais\n";
    }
    else
    {
        cout << "Capivaristo ficara sem doce\n";
    }
    
    return 0;
}


