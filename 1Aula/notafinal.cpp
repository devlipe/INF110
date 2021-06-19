/*  Programa 2: calculo da nota final de um candidato a monitoria 
    Felipe Pereira Ferreira
    04/09/2020
*/
#include <iostream> 

int main() { 
    int entrevista, curriculo, prova; // notas do candidato 
    int total; // total de pontos 
    double media; // media dos pontos

    //Leitura dos dados 
    std::cout << "Escreva a nota da entrevista: "<< std::endl; 
    std::cin >> entrevista; 
    std::cout << "Escreva a nota do curriculo: "<< std::endl; 
    std::cin >> curriculo; 
    std::cout << "Escreva a nota da prova: "<< std::endl; 
    std::cin >> prova; 

    //Cálculo do resultado 
    total = entrevista + curriculo + prova; 
    //Calculo da media
    media = (entrevista + curriculo + prova)/3.0;

    std::cout << "Nota final do candidato: " << total << std::endl; 
    std::cout << "Media final do candidato: " << media << std::endl;
    return 0;
} 
