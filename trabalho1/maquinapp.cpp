/*  Programa para implementar a parte que “devolve” o troco.
    Feipe Pereira Ferreira
    29/09/2020
*/
#include <iostream>
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
    else if (tPago >= preco) // enquanto for possivel dar um troco com valores maiores, o programa vai dar
    {
        troco = tPago - preco;
        
        while ((troco - 10000) >= 0)
        {
            cout << "C 100\n";

            troco -= 10000;
        }
        while ((troco - 5000) >= 0)
        {
            cout << "C 50\n";

            troco -= 5000;
        }
        while ((troco - 2000) >= 0)
        {
            cout << "C 20\n";

            troco -= 2000;
        }
        while ((troco - 1000) >= 0)
        {
            cout << "C 10\n";

            troco -= 1000;
        }
        while ((troco - 500) >= 0)
        {
            cout << "C 5\n";

            troco -= 500;
        }
        while ((troco - 200) >= 0)
        {
            cout << "C 2\n";

            troco -= 200;
        }
        while ((troco - 100) >= 0)
        {
            cout << "M 100\n";

            troco -= 100;
        }
        while ((troco - 50) >= 0)
        {
            cout << "M 50\n";

            troco -= 50;
        }
        while ((troco - 25) >= 0)
        {
            cout << "M 25\n";

            troco -= 25;
        }
        while ((troco - 10) >= 0)
        {
            cout << "M 10\n";

            troco -= 10;
        }
        while ((troco - 5) >= 0)
        {
            cout << "M 5\n";

            troco -= 5;
        }
        while ((troco - 1) >= 0)
        {
            cout << "M 1\n";

            troco -= 1;
        }
    }
    else if (preco > tPago)
    {
        cout << "Saldo insuficiente.\n";
    }

    return 0;
}

