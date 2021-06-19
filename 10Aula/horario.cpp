/*  Programa com o uso de structs para calcular a diferenca entres dois horarios
    Felipe P Ferreira 
    26/11/2020
*/

#include <iostream>
#include <iomanip>
using namespace std;

typedef struct horario
{
    int hora;
    int minuto;
}horario;

void le (horario &t)
{
    cin >> t.hora >> t.minuto;
}

horario diferenca(horario inicio, horario fim)
{
    horario dif = {0, 0};
       
    if (inicio.hora <= fim.hora && inicio.minuto <= fim.minuto)
    {
        dif.hora = fim.hora - inicio.hora;
        dif.minuto = fim.minuto - inicio.minuto;
    }
    else if(inicio.minuto > fim.minuto && inicio.hora < fim.hora)
    {
        fim.hora--;
        dif.minuto = (fim.minuto + 60) - inicio.minuto;
        dif.hora = fim.hora - inicio.hora;
    }
    else if (inicio.minuto < fim.minuto && inicio.hora > fim.hora)
    {
        dif.hora = (fim.hora +24) - inicio.hora;
        dif.minuto = fim.minuto - inicio.minuto;
    }
    else if (inicio.minuto > fim.minuto && inicio.hora > fim.hora)
    {
        fim.hora--;
        dif.minuto = (fim.minuto + 60) - inicio.minuto;
        dif.hora = (fim.hora +24) - inicio.hora;
    }
    return dif;
}

int main()
{
    horario inicio, fim, dif;

    le(inicio);
    le(fim);

    dif = diferenca(inicio, fim);
    cout << setprecision (5) << fixed << dif.hora << ":" << dif.minuto << endl;

    return 0;
}