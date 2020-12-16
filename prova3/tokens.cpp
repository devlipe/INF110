#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[103] = " ";
    char auxiliar[101];
    char test[206] = "";
    int nTok = 0, nDif = 0;
    bool verifica = false;
    cin.getline(auxiliar, 101);
    strcat(a, auxiliar);
    strcat(a, " ");
    
    char *token = strtok(a," ");
    while(token){
        char espc[103] = " ";
        strcat(espc, token);
        strcat(espc, " ");
        nTok++;
        if(!strstr(test, espc)){
            nDif++;
        }
        strcat(test, espc);
        token = strtok(NULL," ");
    }
    cout<<nTok<<" "<<nDif<<"\n";

    return 0;
}