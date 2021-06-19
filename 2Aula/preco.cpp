/*  Programa para calcular o preco de um produto com descontos
    Felipe Pereira Ferreira 
    17/09/2020
*/

#include<iostream>
using namespace std;

int main(void)
{
    double preco, desconto;
    char resp;

    cout << "Informe o preco do produto\n";
    cin >> preco;

    cout << "Tera desconto?";
    cin >> resp;

    if (resp == 83 | 115) {
    
        cout << "\nQual sera o desconto?";
        cin >> desconto;

        preco = preco - (preco * desconto/100);

        cout << "\nO valor final e " << preco << " reais";
    }
        else {
    
            cout << "\nO valor final e" << preco << " reais";
        }
    

    return 0;
}
