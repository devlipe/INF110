/*  Programa para mostrar se a carga de um elevador foi excedida
    Felipe P Ferreira
    25/09/2020
*/
#include<iostream>
using namespace std;

int main(void)
{
    int nLeitura = 0, capacidade = 0, total = 0, entrou = 0, saiu = 0, i = 0;
    bool resp;

    cin >> nLeitura >> capacidade;

    for (i = 1 ; i <= nLeitura ; i++)
    {
        cin >> saiu >> entrou;
        total = total - saiu + entrou;

        if (total > capacidade)
        {
            resp = true;            
        }
    }
    if (resp == false)
    {
        cout << "N\n";
    }
    else
    {
        cout << "S\n";
    }
    
    return 0;
}
