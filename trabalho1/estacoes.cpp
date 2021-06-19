/*  Programa para mostrar as estacoes do ano dependendo da data
    Felipe P Ferreira
    25/09/2020
*/
#include <iostream>//Bibliotecas necessarias
using namespace std;

int main(void)
{
    int dia = 0, mes = 0; //iniciando as variaveis
    
    cin >> dia >> mes;

    mes = (mes == 1)? (1):(mes == 2)? (2): (mes == 3)? (3):(mes ==4)? (4):(mes == 5)? (5):(mes == 6)? (6):(mes == 7)? (7):(mes == 8)? (8):(mes == 9)? (9):(mes == 10)? (10):(mes == 11)? (11):(12);
    switch (mes) //Usando Switch para implementacao, o que facilita a legibilidade
    {
    case 1: cout << dia << " de janeiro"<< endl << "Verao\n";
    break;
    case 2: cout << dia << " de fevereiro"<< endl << "Verao\n";
    break;
    case 3: cout << dia << " de marco"<< endl; 
        if (dia < 20)
        {
            cout << "Verao\n";
        }
        else
        {
            cout << "Outono\n";
        }                                                   //Todos os meses que possuem mais de uma estacao devemos usar o if para decidir qual estacao sera mostrada
    break;
    case 4: cout << dia << " de abril"<< endl << "Outono\n";
    break;
    case 5: cout << dia << " de maio"<< endl << "Outono\n";
    break;
    case 6: cout << dia << " de junho"<< endl;
        if (dia < 21)
        {
            cout << "Outono\n";
        }
        else
        {
            cout << "Inverno\n";
        }    
    break;
    case 7: cout << dia << " de julho"<< endl << "Inverno\n";
    break;
    case 8: cout << dia << " de agosto"<< endl << "Inverno\n";
    break;
    case 9: cout << dia << " de setembro"<< endl;
        if (dia < 23)
        {
            cout << "Inverno\n";
        }
        else
        {
            cout << "Primavera\n";
        }    
    break;
    case 10: cout << dia << " de outubro"<< endl << "Primavera\n";
    break;
    case 11: cout << dia << " de novembro"<< endl << "Primavera\n";
    break;
    case 12: cout << dia << " de dezembro"<< endl;
        if (dia < 22)
        {
            cout << "Primavera\n";
        }
        else
        {
            cout << "Verao\n";
        }    
    break;
    default: cout << "Entrada invalida"<< endl; //Caso nada ocorra como o esperado devemos sempre ter uma valvula de escape, mas normalmente n e necessrio o uso do default
    break;
    }

    return 0;
}
