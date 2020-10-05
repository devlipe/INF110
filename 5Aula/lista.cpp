/*  Programa para ver se uma lista esta ordenada
    Felipe P Ferreira 
    05/10/2020
*/
#include<iostream>
using namespace std;

int main(void)
{
    int numeros[10]={0};
    bool v = false;
    for (int i = 0; i < 10; i++)
    {
        cin >> numeros[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] > numeros[i+1])
        {
            v = true;
        }
    }
    if (v)
    {
        cout << "A lista esta nao crescente";
    }
    else
    {
        cout <<"A lista e crescente";
    }   
    
    return 0;
}
