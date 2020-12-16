#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

char * concatena(char f1[] , char f2[])
{
    int a=0;
    int tam = strlen(f2)+strlen(f1);
    char * p = new char[tam];

    p = f1;
    for(int i = strlen(f1); i <= tam; i++)
    {
        p[i] = f2[a];
        a++;
    }

    return p;
}

int main()
{
    char a[25]= {0};
    char b[25]= {0};

    cin >> a >> b;

    cout << concatena(a,b) << "\n";

    return 0;
}
