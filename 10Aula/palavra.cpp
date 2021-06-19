/*  Ler uma palavra e escreve-la toda em maiusculo
    Felipe P Ferreira
    24/11/2020
*/

#include<iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
    char nome[51];
    int cont = 0, palavras = 1, plv = 1;

    cin.getline(nome,51);
    
    for (int i = 0; nome[i] != '\0'; i++)
    {
        nome[i] = toupper(nome[i]);
        if (isdigit(nome[i]))
        {
            cont++;
        }
        if (nome[i] == ' ')
        {
            palavras++;
        }
    }

    cout << nome << endl;
    cout << "A frase contem " << cont << " digitos." << endl;
    cout << "O nome possui " << palavras << " palavras" << endl;
    cout << "A frase possui " << strlen(nome) - (palavras-1) << " letras";

    return 0;
}
