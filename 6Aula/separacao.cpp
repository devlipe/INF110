/*  Programa que separa as funcoes de leitura e saida de dados
    Felipe P Ferreira 
    26/10/2020
*/
#include<iostream>
using namespace std;

int leitura(int inf , int sup)
{
    int a = 0; 
    cin >> a;
    if (a < inf || a > sup)
    {
        return leitura(inf, sup);
    }
    
    return a;
}
void escrita(int a)
{
    cout << endl <<  a << endl;
}

int main() 
{   
    int numero = 0;
    int inf = 10, sup = 100;
    
    numero = leitura(inf , sup);
    escrita(numero);

    return 0;
}
