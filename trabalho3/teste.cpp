#include <iostream>
#include<cstring>
#include <cctype>
#include <clocale>
using namespace std;

int main(int argc, char const *argv[])
{
    char signo[30] = "Capricórnio";

    for (int i = 0; i < strlen(signo); i++)
    {
        signo[i] = tolower(signo[i]);
    }
    cout << signo;
    return 0;
}
