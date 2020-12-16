#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char linha[101];
    int p_abre = 0, p_fecha = 0;

    cin.getline(linha,101);

    for (int i = 0; i < strlen(linha); i++)
    {
        if (linha[i]== '(')
        {
            p_abre++;
        }
        else if (linha[i] == ')')
        {
            p_fecha ++;
        }
        
    }

    if (p_abre == p_fecha)
    {
        cout << "SIM\n";
    }
    else
    {
        cout << "NAO\n";
    }

    return 0;
}
