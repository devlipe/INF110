/*  Programa para calcular as colocacoes de cada time na copa do mundo
    Felipe P Ferreira
    12/04/2020
*/
#include <iostream>
#include <cstring>
using namespace std;

struct TipoPartida 
{
    char time1[31], time2[31];
    int placar1, placar2;
};

int main()
{
    int n;
    cin >> n;
    TipoPartida partida[50];
    char x, times[4][31];
    int pontos[4] = {0};

    for (int  i = 0; i < n; i++)
    {
        cin >> partida[i].time1 >> partida[i].placar1 >> x >> partida[i].placar2 >> partida[i].time2;
    }

    for (int i = 0; i < 4 ; i++)
    {
        cin >> times[i];
    }
    
    for(int i=0 ; i<4 ;i++)
    {
        for(int j=0 ; j<n ;j++)
        {
           if(strcmp(partida[j].time1 , times[i]) == 0)
           {
                if(partida[j].placar1>partida[j].placar2)
                {
                    pontos[i]+=3;
                }
                if(partida[j].placar1==partida[j].placar2)
                {
                    pontos[i]+=1;
                }
            }
            if(strcmp(partida[j].time2 , times[i]) == 0)
            {
                if(partida[j].placar2 > partida[j].placar1)
                {
                    pontos[i]+=3;
                }
                if(partida[j].placar2 == partida[j].placar1)
                {
                    pontos[i]+=1;
                }
            }

        }
    }
    for(int i=0 ; i<4 ; i++){
        cout << times[i] <<" "<< pontos[i] << endl;
    }
    
    return 0;
}
