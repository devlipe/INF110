/*  Programa para ordernar por numero de matricula as notas dos alunos
    Felipe P Ferreira 
    04/12/2020
*/

#include <iostream>
using namespace std;

struct Alunos
{
    int matricula;
    int notas;
};

void swap(Alunos &a, Alunos &b)
{
    Alunos temp = a;
    a = b;
    b = temp;
}

void bubble(Alunos data[], int how_many)
{
    int i, j;
    int go_on;

    for ( i = 0; i < how_many; i++)
    {
        for (j = how_many - 1 ; j > i; j--)
        {
            if (data[j-1].matricula > data[j].matricula)
            {
                swap(data[j-1] , data[j]);
            }
            
        }
    }

}

int main()
{
    int n;

    cin >> n;

    Alunos a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].matricula >> a[i].notas;
    }

    bubble(a,n);

    for (int  j = 0; j < n; j++)
    {
        cout << a[j].matricula << " "<< a[j].notas << endl;
    }
    
    return 0;
}
