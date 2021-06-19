/*  programa que recebe duas listas de N valores cada e mostra a intercalacao dos 2N valores das listas.
    Felipe P Ferreira
    06/11/2020
*/

#include <iostream>
using namespace std;

void ler (int lista[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        cin >> lista[i];
    }
}

void intercalar (int a[], int b[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " " << b[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size = 0;

    cin >> size;

    int a[size] = {0};
    int b[size] = {0};

    ler(a, size);
    ler(b, size);
    intercalar(a, b, size);

    return 0;
}
