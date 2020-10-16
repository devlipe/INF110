/*  programa que determina se ele pode ser expresso como uma soma de pelo menos 2 n´umeros positivos consecutivos.
    Felipe P Ferreira
    16/10/2020
*/

#include<iostream>
using namespace std;

int main(){
	
	int numero = 0,count = 0;
    int v = 0, sum = 0;
	
	cin >> numero;
	
	for(int i = 0 ;i < numero; i++)
    {
		sum += i;

		if(sum == numero)
        {
			count++;

            break;
		}
		else if(sum > numero)
        {
			v++;
	        i = v;
	        sum = 0;
		}
	}
	
	if(count==1)
    {
		cout<<"SIM"<<endl;
	}
    else
    {
		cout<<"NAO"<<endl;
	}

	return 0;
}