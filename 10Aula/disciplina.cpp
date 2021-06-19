/*  Programa que mostra o resultado de uma disciplina
    Felipe P Ferreira
    26/11/2020
*/
#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
using namespace std;

typedef struct aluno
{
    int ndm;
    char nome[31];
    int nota[3];
    double media;
}aluno;

void media(aluno *fdp, int n)
{
    for (int i = 0; i < n; i++)
    {
        double soma = 0.0;
        for (int j = 0; j < 3; j++)
        {
            soma += fdp[i].nota[j];
        }
        fdp[i].media = soma/3.0;
    }
    
}

int main()
{
    int n;
    cout << "Quantos disgraca estaremos reprovando? ";
    cin >> n;

    aluno *alunos;
    alunos = (aluno*)new aluno[n];  
    
    for (int i = 0; i < n; i++)
    {
        cout << "Digite a matricula do(a) aluno(a) " << i+1 << ": ";
        cin >> alunos[i].ndm;
        cin.ignore();
        cout << "Digite o nome do fiedaputa " << i+1 << ": ";
        cin.getline(alunos[i].nome,30);
        for (int j = 0; j < 3; j++)
        {
            cout << "Digite a nota " << j+1 << ": ";
            cin >> alunos[i].nota[j];
        }
        cout << endl;
    }
    
    media(alunos, n);

    cout << fixed << setprecision(2);
    for (int i = 0; i < n; i++)
    {
        if (alunos[i].media >= 60.0)
        {
            cout << "O(A) incrivel " << alunos[i].nome << " foi APROVADO(a). Media : " << alunos[i].media  << ". Matricula :" << alunos[i].ndm << endl;
        }
        else
        {
            cout << "O(A) disgraca " << alunos[i].nome << " foi REPROVADO(a). Media : " << alunos[i].media << ". Matricula :" << alunos[i].ndm << endl;
        }
    }
    
    return 0;
}
