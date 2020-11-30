#include <iostream>
#include <ctime>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
    char saudacoes[4][170] = {"Olá, meu nome é Dr. Sheldon Cooper e você está no meu lugar! Saia daí e me diga seu nome, aí sim poderemos comecar a falar sobre os signos do zodíaco!", "Oh! Você chegou. Meu nome é Dr. Sheldon Cooper, e você está no Dr. Sheldon Copper apresenta diversão com o zodíaco! Me diga o seu nome!", "Não, eu não sou louco, minha mãe me teve testado! Eu sou o Dr. Sheldon Cooper. Me diga seu nome, e assim poderemos falar sobre os signos do zodíaco!", "BAZINGA! Meu nome é Dr. Sheldon Cooper, estamos aqui para falar sobre os signos do zodíaco, me fale seu nome para comecarmos!"};
    char resposta[201], nome[30];
    char * aux;

    srand(time(NULL));
    cout << saudacoes[rand()%4] << endl;
    cin.getline(resposta,201);
    aux = strtok(resposta, " ,");
    while (aux != NULL)
    {
        strcpy (nome, aux);
        aux = strtok(NULL, " ,");
    }
    
    

    return 0;
}

