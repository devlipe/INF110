/*  Programa para maquina de vendas com cedulas
    Felipe P Ferreira
    26/09/2020
*/
#include<iostream>
using namespace std;// Blibiotecas e namespace necessario para funcionar

int main(void)
{
    int produto = 0 , vPago = 1, troco = 0, tPago = 0, preco = 0; //Iniciando as variaveis com vPago como 1 para que o while funcione
    char t;
    
    cin >> produto;

    if (produto == 1) // Atribuindo ao preco o valor de cada produto
    {
        preco = 430;
    }
    else if (produto == 2)
    {
        preco = 270;
    }
    else if (produto == 3)
    {
        preco = 143;
    }

    while (vPago != 0) //Pegando os valores e alterando reais para centavos
    {
        cin >> t >> vPago;

        if (t == 'C')
        {
            vPago = vPago * 100;
        }

        tPago += vPago;
    }
    
    if (produto != 1 && produto != 2 && produto != 3) // Se nao for um dos 3 produto 
    {
        cout <<  "Produto inexistente.\n";
    }
    else if (tPago >= preco) //Para mostrar o troco
    {
        troco = tPago - preco;
        cout << "Troco de " << troco << " centavos.\n";
    }
    else if (preco > tPago)
    {
        cout << "Saldo insuficiente.\n";
    }

    return 0;
}
