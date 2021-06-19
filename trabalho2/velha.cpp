/*  Programa que recebe uma sequencia de jogadas do jogo da velha e emita uma mensagem indicando o ganhador ou se houve empate
    Felipe P Ferreira
    11/04/2020
*/

#include <iostream>
using namespace std;

int main()
{
    char pos[3][3] = {0}, letra = 0;
    int i = 0, linha = 0, coluna = 0, jogadas = 0;
    bool boo = false;

    cin >> jogadas;

    while (i < jogadas)
    {
        cin >> letra >> linha >> coluna; 
        pos[linha][coluna] = letra;
        i++;
    }
    letra = 0;
    
    if (pos[0][0] == pos[1][1] && pos[1][1] == pos [2][2] && pos[0][0] != 0)
    {
        letra = pos[0][0];
        boo = true;
    }
    if (pos[0][2] == pos[1][1] && pos[1][1] == pos [2][0] && pos[0][0] != 0)
    {
        letra = pos[0][2];
        boo = true;
    }
    if (boo == false)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                for (int p = 0; p < 3; p++)
                { 
                    if (j != k && k != p && j != p && pos[j][j] != 0)
                    {
                        if (pos[j][j] ==  pos[j][k] && pos[j][k]  == pos[j][p])
                        {
                            letra = pos[j][j];
                        }
                        else if (pos[j][j] == pos[k][j] && pos[k][j] == pos[p][j])
                        {
                            letra = pos[j][j];
                        }
                    }
                } 
            }        
        }
    }
    if (letra == 0)
    {
        cout << "Velha!\n";
    }
    else
    {
        cout << "Venceu " << letra << "!\n";
    }
    
    return 0;
}
