#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{
    char frase[1000000];
    int tokens = 0, tipo = 0, a = 0;
    char * pch;
    char * memoria[50];
    bool teste = true;

    for (int i = 0; i < 50; i++)
    {
        memoria[i]= NULL;
    }

    cin.getline(frase,101);

    pch = strtok(frase, " ");

    while (pch != NULL)
    {
        teste = true;

        for (int i = 0; memoria[i] != NULL; i++)
        {
            if ((strcmp(pch, memoria[i]) == 0))
            {
                teste = false;
                break;
            }
            
        }
        if (teste)
        {
            tipo++;
        }
        
        
        tokens++;
        memoria[a] = pch;
        a++;
        pch = strtok(NULL, " ");
    }
    
    cout << tokens << " " << tipo << endl;
    return 0;
}
