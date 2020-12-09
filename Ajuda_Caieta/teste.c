#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    int decifra, rotaci_palavra, rotaci_num;
    int i, j, k;
    int x, y, ch, n = 0;
    char frase[300] = {0}, codigo[300], c;
    char alfa_min[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char alfa_mai[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char num[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    
    scanf("%d\n", &decifra);
    scanf("%d\n", &rotaci_palavra);
    scanf("%d", &rotaci_num);
    getchar();
    fgets(frase, 300, stdin);

    
    if (decifra == 1){
        for (k = 0; k < 10; k++){
        for (j = 0; j < 26; j++){
        for (i = 0; i <= (int)strlen(frase); i++){
            
            if (frase[i] == '\n'){
                codigo[i] = '\0';
                break;
            }

            if (frase[i] == ' '){
                codigo[i] = frase[i];
            }
            
            if (frase[i] == ',' || frase[i] == '.' || frase[i] == ';' || frase[i] == ':' || frase[i] == '?' || frase[i] == '!'){
            codigo[i] = frase[i];
            }

            if (frase[i] == num[k]){
                codigo[i] = num[k + rotaci_num];
                if ((k + rotaci_num) > 10){
                    y = (rotaci_num + k) - 10;
                    codigo[i] = num[y];
                }
            }
        
            if (islower(frase[i])){
                codigo[i] = alfa_min[j + rotaci_palavra];
                if ((j + rotaci_palavra) > 26){
                    x = (rotaci_palavra + j) - 26;
                    codigo[i] = alfa_min[x];
                }
            }

            if (isupper(frase[i])){
                codigo[i] = alfa_mai[j + rotaci_palavra];
                if ((j + rotaci_palavra) > 26){
                    x = (rotaci_palavra + j) - 26;
                    codigo[i] = alfa_mai[x];
                }
            }


        }}}
    }

    if (decifra == 0){
        for (k = 0; k < 10; k++){
        for (j = 0; j < 26; j++){
        for (i = 0; i <= (int)strlen(frase); i++){
            
            if (frase[i] == '\n'){
                codigo[i] = '\0';
                break;
            }

            if (frase[i] == ' '){
                codigo[i] = frase[i];
            }

            if (frase[i] == ',' || frase[i] == '.' || frase[i] == ';' || frase[i] == ':' || frase[i] == '?' || frase[i] == '!'){
            codigo[i] = frase[i];
            }

            if (frase[i] == num[k]){
                codigo[i] = num[k - rotaci_num];
                if ((k - rotaci_num) < 0){
                    y = rotaci_num - k;
                    codigo[i] = num[10 - y];
                }
            }
        
            if (frase[i] == alfa_min[j]){
                codigo[i] = alfa_min[j - rotaci_palavra];
                if ((j - rotaci_palavra) < 0){
                    x = rotaci_palavra - j;
                    codigo[i] = alfa_min[26 - x];
                }
            }

            if (frase[i] == alfa_mai[j]){
                codigo[i] = alfa_mai[j - rotaci_palavra];
                if ((j - rotaci_palavra) < 0){
                    x = rotaci_palavra - j;
                    codigo[i] = alfa_mai[26 - x];
                }
            }


        }}}
    }

    printf("%s\n", codigo);
    return 0;
}