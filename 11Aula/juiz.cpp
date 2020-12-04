/*  Programa para julgar a saida de dos programas
    Felipe P Ferreira
    04/12/2020
*/
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;



int main()
{
    char correto[101], resposta[101];
    

    cin.getline(correto, 101);
    cin.getline(resposta, 101);

    if (strcmp(correto, resposta) == 0)
    {
        cout << "Accepted" << endl;
    }

    else
    {
        const char *p = correto;
        int i = 0;
        while (*p)
        {
            if (!isspace(*p))
                correto[i++] = *p;

            p++;
        }
        correto[i] = 0;

        const char *p2 = resposta;
        int i2 = 0;
        while (*p2)
        {
            if (!isspace(*p2))
                resposta[i2++] = *p2;

            p2++;
        }
        resposta[i] = 0;


        if (strcmp(correto, resposta) == 0)
        {
            cout << "Presentation Error" << endl;
        }
        else
        {
            cout << "Wrong Answer" << endl;
        }
    }
    return 0;
}
