/*  Programa para calcular volume da caixa
    Felipe Pereira Ferreira
    04/09/2020
*/

#include<iostream>
using namespace std;

int main(void) {

    double largura = 0, altura = 0, comprimento = 0 , volume = 0; //Inicializando as variaveis

    //Pegando os dados
    cout << "Digite a largura da caixa: \n";
    cin >> largura; 
    cout << "Digite a altura da caixa: \n";
    cin >> altura;
    cout << "Digite o comprimento da caixa: \n";
    cin >> comprimento;

    //Fazendo os calculos 
    volume = largura * altura * comprimento;

    // Mostrar o resultado
    cout << "O volume da caixa e: " << volume << endl;

    return 0;
}