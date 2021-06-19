/*  Programa para determinar a situacao de um aluno do sapiens
    Felipe P Ferreira
    18/09/2020
*/
#include<iostream>
using namespace std;

int main(void)
{
    int NF = 0, FT = 0 , FP = 0;

    cin >> NF >> FT >> FP;

    if (FT <= 15 && FP <= 7)
    { 
        if (NF < 40)
        {
            cout << "Reprovado\n";
        }
        else if ( NF >= 40 && NF < 60)
        {
            cout << "Final\n";
        }else
        {
            cout << "Aprovado\n";
        }     
    }
    else
    {
        cout << "Reprovado\n";
    }
    
    return 0;
}
