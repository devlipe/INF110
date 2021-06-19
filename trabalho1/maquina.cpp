/*  Programa para contabilizar o valor inserido em uma maquina automatica de vendas
    Felipe P Ferreira
    26/09/2020
*/

#include<iostream>
using namespace std;

int main(void)
{
    int preco = 0, pago = 0, moeda = 1, troco = 0; //Devemos iniciar a moeda como um devido a um baile de logica para que o while funcione

    cin >> preco;
    
    while (moeda != 0)
    {
        moeda = 0;//Depois de entrar no while o valor da moeda deve voltar a 0
        cin >> moeda;

        pago += moeda;
    }
    if (pago >= preco)
    {
        troco = pago - preco;
        cout << "Troco de " << troco << " centavos." << endl;
    }
    else
    {
        cout << "Saldo insuficiente." << endl;
    }
    
    return 0;
}
