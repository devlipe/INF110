/*  Faca uma funcao que calcule a divisao inteira entre dois numeros naturais e tambem seu resto.
    Felipe P Ferreira 
    13/11/2020
*/

#include <iostream>
using namespace std;

bool divresto(int dvd, int dvs, int &it, int &ret)
{
    if (dvs == 0)
    {
        return false;
    }
    else
    {
        it = dvd / dvs;
        ret = dvd % dvs;
        return true;
    }    
}

int main()
{
    int it = 0, ret = 0, dvd = 0, dvs = 0, n = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> dvd >> dvs;
        if (divresto(dvd, dvs, it, ret))
        {
            cout << it <<" "<<  ret << endl;
        }
        else
        {
            cout << "indefinido\n";
        }
    }
    
    return 0;
}

