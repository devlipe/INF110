#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;

int main()
{
    char a[51];
    
    cin >> a;
    a[0] = 'p';
    a[1] = 'i';
    for (int i = 0; a[i] != '\0'; i++)
    {
        a[i] = toupper(a[i]);
    }
    cout << a << endl;
    
    return 0;
}

