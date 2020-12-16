#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
    char A[101], B[101];
    bool v;
    int c = 0;
 
    cin >> A >> B;

    if(strlen(B) >= strlen(A))
    {
        for(int i = 0; i < (strlen(B) - strlen(A) + 1); i++)
        {
            v = true;

            for(int j = 0; j < strlen(A); j++)
            {
                if(B[i + j] != A[j])
                {
                    v = false;
                }
            }
            if(v)
            {
                c++;
            }
        }
    }

    cout << c <<"\n";

    return 0;
}