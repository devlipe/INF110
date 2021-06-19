/*  Programa para ler um horario no formato 24h e transforma-lo para o padrao 12h
    Felipe P Ferreira
    04/12/2020
*/

#include <iostream>
#include <iomanip>
using namespace std;

struct Horario 
{
int horas, minutos;
};

void escreve (Horario h)
{   
    if (h.horas == 0)
    {
        cout << "12:" << setw(2) << setfill('0') << h.minutos << " AM" << endl;
    }
    if (h.horas == 12)
    {
        cout << setw(2) << setfill('0') << h.horas << ":" << setw(2) << setfill('0')<< h.minutos << " PM" << endl;
    }
    if (h.horas < 12 && h.horas != 0)
    {
        cout << setw(2) << setfill('0') << h.horas << ":" << setw(2) << setfill('0') << h.minutos << " AM" << endl;
    }
    if (h.horas > 12)
    {
        cout << setw(2) << setfill('0') << h.horas%12 << ":" << setw(2) << setfill('0') << h.minutos << " PM" << endl;
    }

}

int main()
{
    Horario a;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a.horas >> a.minutos;

        escreve(a);
    }
    
    return 0;
}

