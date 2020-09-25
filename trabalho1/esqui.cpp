/*  Programa para calcular o score de um competidor na modalidade “Salto de esqui”.
    Felipe P Ferreira
    25/09/2020
*/

#include <iostream>
#include <iomanip>
//Blibliotecas necessarias para o codigo
using namespace std;

int main(void)
{
    double salto = 0, notaSalto = 0, notaEstilo = 0, notaFinal = 0;
    double j1 = 0, j2 = 0, j3 = 0, j4 = 0, j5 = 0, maior = 0, menor = 0; //iniciando as variaveis 

    cin >> salto;

    notaSalto = 60 + (salto - 120) * 1.8; // calculando a nota parcial do salto
    
    cin >> j1 >> j2 >> j3 >> j4 >> j5; 
    
    //Escolhendo o maior valor
    if (j1 >= j2 && j1 >= j3 && j1 >= j4 && j1 >= j5)
    {
        maior = j1;
    }
    else if (j2 >= j1 && j2 >= j3 && j2 >= j4 && j2 >= j5)
    {
        maior = j2;
    }
    else if (j3 >= j1 && j3 >= j2 && j3 >= j4 && j3 >= j5)
    {
        maior = j3;
    }
    else if (j4 >= j1 && j4 >= j2 && j4 >= j3 && j4 >= j5 )
    {
        maior = j4;
    }
    else if (j5 >= j1 && j5 >= j2 && j5 >= j3 && j5 >= j4)
    {
        maior = j5;
    }
    // Escolhendo o menor valor
    if (j1 <= j2 && j1 <= j3 && j1 <= j4 && j1 <= j5)
    {
        menor = j1;
    }
    else if (j2 <= j1 && j2 <= j3 && j2 <= j4 && j2 <= j5)
    {
        menor = j2;
    }
    else if (j3 <= j1 && j3 <= j2 && j3 <= j4 && j3 <= j5)
    {
        menor = j3;
    }
    else if (j4 <= j1 && j4 <= j2 && j4 <= j3 && j4 <= j5 )
    {
        menor = j4;
    }
    else if (j5 <= j1 && j5 <= j2 && j5 <= j3 && j5 <= j4)
    {
        menor = j5;
    }

    // Fazendo a nota dos estilos 
    notaEstilo = (j1 + j2 + j3 + j4 + j5) - (menor + maior);
    
    notaFinal = notaSalto + notaEstilo;
    cout << fixed << setprecision(1) << notaFinal << endl;
    return 0;
}

