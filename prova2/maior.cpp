#include<iostream>
using namespace std;

int maior (int v[], int posicao, int n)
{
    static int max = 0;
    if (posicao < n)
    {
        if (max < v[posicao])
        {
            max = v[posicao];
        }
        maior(v, posicao+1, n);
    }
    return max;
}

int main(int argc, char const *argv[])
{
    int v[40] = {0};
    
    for (int i = 0; i < 40; i++)
    {
        v[i] = i;
    }
    cout << maior(v, 0, 40);
    return 0;
}
