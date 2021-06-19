/*  Dada uma lista de N numeros inteiros, seu programa deve determinar quantos existem na lista
    Felipe P Ferreria
    09/10/2020
*/
#include <iostream>
using namespace std;

int main()
{
    int n = 0;

    cin >> n;

    int Lista[n] = {0}, cont = 0;
    bool v = false;

    for (int i = 0; i < n; i++)
    {
        cin >> Lista[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (Lista[i] == 0)
        {
            v = true;
        }
    }
    if (v)
    {
        cont++;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (Lista[i] != 0)
        {
            cont++;
                for(int j = i + 1; j < n; j++){
                    if(Lista[j] == Lista[i]){
                        Lista[j] = 0;
                    }
                }
            Lista[i] = 0;
        }
        
    }
    cout << cont << endl;

    return 0;
}
