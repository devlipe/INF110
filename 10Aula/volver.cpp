#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{
    int n;
    cin>>n;

    char a[n + 1];

    cin>>a;

    bool invertido = true;
    bool mudanca = false;
    bool Par = false;

    while(invertido){

        cout<<a<<"\n";
        mudanca = false;
        Par = false;

        for(int i = 0; i < strlen(a) - 1; i++)
        {
            if(Par)
            {
                Par = false;
            }
            else
            {
                if(a[i] == 'D' && a[i + 1] == 'E')
                {
                    mudanca = true;
                    Par = true;
                    a[i] = 'E';
                    a[i + 1] = 'D';
                }
            }
        }
        
        if(!mudanca)
        {
            invertido = false;
        }
    }
    return 0;
}