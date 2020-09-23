/*  Programa para calcular o salario total
    Felipe Pereira Ferreira
    04/09/2020
*/

#include<iostream>
using namespace std;

int main(void) {

    int salarioBase = 0 , valorHora = 0 , nHora= 0 , salarioHora = 0, total = 0; //Inicializando as variaveis 

    cout << "Digite o salario base do funcionario: ";
    cin >> salarioBase;
    cout << "Digite o valor da hora extra e a quantidade de hora extra: ";
    cin >> valorHora >> nHora;

    //Realizando os calculos
    salarioHora = nHora * valorHora;
    total = salarioBase + salarioHora;

    // Mostrando os resultados
    cout << "O salario total e de " << total << " reais. E foram pagos " << salarioHora << " reais em hora extra.";

    return 0;
}