#include <iostream>
using namespace std;

int main()
{
    int p = 0, i = 0;

    cin >> p >> i;

    int mat[p][i] = {{0}};
    int preco[i] = {0};
    int final[p] = {0};

    for (int k = 0; k < p; k++)
    {
        for (int q = 0; q < i; q++)
        {
            cin >> mat[k][q];
        }
    }

    for (int k = 0; k < i; k++)
    {
        cin >> preco[k];
    }

    for (int k = 0; k < p; k++)
    {
        for (int q = 0; q < i; q++)
        {
            final[k] += (mat[k][q] * preco[q]);
        }
    }

    for (int k = 0; k < p - 1 ; k++)
    {
        cout << final[k] << " ";
    }
    cout << final[p-1] << endl;
    return 0;
}