/*  Programa para ler a altura idade e sexo de 10 atletas e fornecer a media
    Felipe P Ferreira
    1/10/2020
*/

#include<iostream>
using namespace std;

int main(void)
{
    int altura[10] = {0}, idade[10]={0}, i = 0, media_idade = 0, F = 0 , M =0;
    double media_feminina = 0, media_masculina = 0;
    char sexo[10] = {'O'};

    cout << "Entre com a altura (em centimetros), idade e sexo (M)(F) do atleta:\n";
    
    for ( i = 0; i < 10; i++)
    {
        cin >> altura[i] >> idade[i] >> sexo[i];
    }
    for ( i = 0; i < 10; i++)
    {
        media_idade += idade[i];
        
    }
    media_idade = media_idade/10;
    cout << "A media das idades e : " << media_idade << endl;

    for ( i = 0; i < 10; i++)
    {
        if (sexo[i]=='F')
        {
            media_feminina += altura[i];
            F++;
        }
        if (sexo[i]=='M')
        {
            media_masculina += altura[i];
            M++;
        }
    }
    cout << "\nA media de altura feminina e: " << media_feminina/F << endl;
    cout << "\nA media de altura masculina e: " << media_masculina/M << endl;
    
    return 0;
}
