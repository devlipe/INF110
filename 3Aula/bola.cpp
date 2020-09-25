/*  Programa para calcular se a bola cabe ou nao
    Felipe P Ferreira
    18/09/2020
*/

#include <iostream>
using namespace std;

int main(void)
{
    int diametro = 0; // diametro da bola
    int altura = 0, largura = 0, profundidade = 0;
    
    cin >> diametro;
    cin>> altura >> largura >> profundidade;

    if (diametro <= altura && diametro <= largura && diametro <= profundidade)
    {
        cout << "S\n"; 
    }
    else
    {
        cout << "N\n";
    }
    
    return 0;
}
