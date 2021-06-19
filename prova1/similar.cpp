/*  Programa para verificar a se as p´aginas s˜ao similares ´e usado o c´aculo do produto interno entre dois vetores
    Felipe P Ferreira
    16/10/2020
*/

#include <iostream>
using namespace std;

int main(void)
{
    int numero;
    cin >> numero;
    int a[numero] = {0}, b[numero] = {0}, c[numero] = {0};
    long long int linha12 = 0, linha13 = 0, linha23 = 0;

    for (int i = 0; i < numero; i++)
    {
        cin >> a[i];
    }

    for (int p = 0; p < numero; p++)
    {
        cin >> b[p];
    }
        
    for (int k = 0; k < numero; k++)
    {
        cin >> c[k];
    }

    for (int l = 0; l < numero; l++)
    {
        linha12 += (a[l] * b[l]);
        linha13 += (a[l] * c[l]);
        linha23 += (b[l] * c[l]);
    }

    if (linha12 > linha13 && linha12 > linha23)
    {
        cout << "1 2" << endl;
    }
       
    else if (linha13 > linha23 && linha13 > linha12)
    {
        cout << "1 3" << endl;
    }
      
    else if (linha23 > linha12 && linha23 > linha13)
    {
         cout << "2 3" << endl;
    }
    return 0;
}
