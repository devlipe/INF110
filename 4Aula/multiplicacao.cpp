#include <iostream>
using namespace std;

int main(void)
{
    int a[10] = {0}, b[10] = {0}, mult = 0, i = 0, j = 0;

    for ( i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
     for ( i = 0; i < 10; i++)
    {
        cin >> b[i];
    }

    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            mult = a[i] * b[j];
            
            cout << "A"<< i << " * " <<"B"<< j << " = " << mult << endl;
        }
        
    }
    
    return 0;
}
