//Programa 3: caixa de restaurante 
#include <iostream> 

int main() { 

    double comida,bebida,sobremesa; // consumo 
    double valordaconta, valorpago, troco; // outros valores 

        std::cout << "Escreva o valor consumido em comida, bebida e sobremesa: "; 
        std::cin >> comida;
        std::cin >> bebida;
        std::cin >> sobremesa;  //Lê os dados 
        std::cout << "Escreva o valor pago pelo cliente: "; 
        std::cin >> valorpago; 

        valordaconta = comida + bebida + sobremesa; //Realiza a soma do valor da conta 
        troco = valorpago - valordaconta; 

        std::cout << "\n\nRESTAURANTE PEGUE E PAGUE\n"; 
        std::cout << "Consumo: " << comida << " + " << bebida << " + " << sobremesa << " = "; 
        std::cout << valordaconta << "\n" ;
        std::cout << "Valor Pago: " << valorpago << "\n" ;
             if (valorpago < valordaconta){
        
                std :: cout << "O valor nao e suficiente, bate que e calote!";
                std :: cout << "\nFalta: " << -troco << "reais";
            }
                else {
        
                std::cout << "Troco: " << troco << "\n" ;
                std::cout << "Volte sempre!\n";
                }
        
 return 0; 
 }
