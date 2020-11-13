/*  Programa para somar duas fracoes
    Felipe P Ferreira
    13/11/2020
*/

#include <iostream>
using namespace std;

int mdc(int a, int b) {
   if (a == 0 || b == 0)
   {
       return 0;
   }
   else if (a == b)
   {
       return a;
   }
   else if (a > b)
   {
       return mdc(a-b, b);
   } 
   else
   {
       return mdc(a, b-a);
   } 
}

//Recebe fracoes na/da e nb/db e retorna por referencia nr/dr = na/da + nb/db
void somafrac(int na, int da, int nb, int db, int &nr, int &dr)
{
    int mmc = 0, mdci = 0;
    mmc = da * db;
    nr = (na * db) + (nb * da);
    dr = mmc;
    mdci = mdc(nr, dr);
    nr = nr / mdci;
    dr = dr / mdci;
}

int main()
{
    int na = 0, da = 0, nb = 0, db = 0, nr = 0, dr = 0;
    char b;

    cin >> na >> b >> da >> nb >> b >> db;
    somafrac(na, da, nb, db, nr, dr);
    cout << na << b << da << "+" << nb << b << db << "=" << nr << b << dr << endl;

    return 0;
}
