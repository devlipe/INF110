#include <iostream>
#include <cstring>
using namespace std;

int main(){

    int n;
    int **mat;
    int diagonalp = 0, diagonals = 0;

    cin>>n;

    mat = new int *[n]; 
    
    for(int i=0 ; i<n ;i++)
    {
        mat[i] = new int [n]; 
    }

    for(int i=0 ; i < n ;i++)
    {
        for(int j=0 ; j < n ;j++)
        {
            mat[i][j] = 0;
        }
    }

    for(int i=0 ; i < n ;i++)
    {
        for(int j=0 ; j < n ;j++)
        {
            cin>>mat[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                diagonalp += mat[i][j];
            }
        }
    }
    int v = n-1;

    for (int i = 0; i < n; i++)
    {
        diagonals += mat[i][v];
        v--;
    }
    
    cout << diagonalp -diagonals << endl;

    for (int i = 0; i < n; i++)
    {
        delete mat[i];
    }

    delete []mat;
    

    return 0;
}