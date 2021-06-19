#include <iostream>
#include <string.h>
#include <cstdlib>
#include <time.h>

using namespace std;

bool validaNaoDespedida(char resposta[200]){
    if(strstr(resposta,"tchau") || strstr(resposta,"adeus") || strstr(resposta,"flw")){
        return false;
    }
    return true;
}

void exibirInformacoesSigno(int signo){
    if(signo == 1){
        cout<<"Aquário é o signo dos nascidos entre 22 de janeiro a 19 de fevereiro.\n"<<
            "É um signo regido por Saturno e Urano.\n"<<
            "Tem o ar como elemento e possui mais compatibilidade com Áries, Gêmeos, Leão e Libra.\n"<<
            "O signo de Aquário é inteligente, energético e cheio de ideias brilhantes, mas ao mesmo tempo muito humano e honestamente voltado para o bem-estar da raça humana.\n"<<
            "Sua maior fraqueza é a falta de conexão com o mundo em que vivem. \n"<<
            "Alguns famosos do signo de Aquário são Jennifer Aniston, Ashton Kutcher, Shakira e Harry Styles.\n";
    }else{
        if(signo == 2){
            cout<<"Peixes é o signo dos nascidos entre 20 de fevereiro a 20 de março.\n"<<
                "É um signo regido por Netuno e Júpiter.\n"<<
                "Tem a água como elemento e possui mais compatibilidade com Virgem e Touro.\n"<<
                "As pessoas do signo de Peixes possui como Pontos fortes a compaixão, o lado artístico, a intuição, a gentileza e a sabedoria.\n"<<
                "Como pontos fracos a tristeza, a vitimização, o desejo de escapar da realidade e o medo.\n"<<
                "Alguns famosos do signo de Peixes são Rihanna, Drew Barrymore, Regina Casé, Justin Bieber, Sharon Stone, Albert Einstein, Michelangelo e Daniel Craig.\n";
        }else{
            if(signo == 3){
                cout<<"Áries é o signo dos nascidos entre 21 de março a 20 de abril.\n"<<
                    "É um signo regido por Marte.\n"<<
                    "Tem o fogo como elemento e possui mais compatibilidade com Leão, Libra, Sagitário e Aquário.\n"<<
                    "Áries é corajoso e considerado o signo mais forte do zodíaco.\n"<<
                    "O maior ponto fraco daqueles nascidos com o Sol em Áries é a teimosia.\n"<<
                    "Alguns famosos do signo de Áries são Xuxa, Anitta, Emma Watson, Sadie Sink, Anya Taylor-Joy.\n";
            }else{
                if(signo == 4){
                    cout<<"Touro é o signo dos nascidos entre 21 de abril a 21 de maio.\n"<<
                        "É um signo regido por Vênus.\n"<<
                        "Tem a terra como elemento e possui mais compatibilidade com Câncer, Virgem, Escorpião e Capricórnio.\n"<<
                        "Touro é conhecido por seu apego e confiabilidade.\n"<<
                        "Dentre os pontos fracos, este é um signo de amor físico e hedonismo ligado à realidade material.\n"<<
                        "Alguns famosos do signo de Touro são Rainha Elizabeth II, Mariana Ximenez, David Beckham, Megan Fox.\n";
                }else{
                    if(signo == 5){
                        cout<<"Gêmeos é o signo dos nascidos entre 22 de maio a 21 de junho.\n"<<
                            "É um signo regido por Mercúrio.\n"<<
                            "Tem o ar como elemento e possui mais compatibilidade com Leão, Libra, Sagitário e Aquário.\n"<<
                            "As pessoas nascidas com o Sol em Gêmeos são espirituosas, rápidas, adaptáveis e inteligentes.\n"<<
                            "O ponto fraco de qualquer Gêmeos é a inconsistência.\n"<<
                            "Alguns famosos do signo de Gêmeos são Angelina Jolie, Chris Evans, Morgan Freeman, Tom Holland.\n";
                    }else{
                        if(signo == 6){
                            cout<<"Câncer é o signo dos nascidos entre 22 de junho a 23 de julho.\n"<<
                                "É um signo regido pela Lua.\n"<<
                                "Tem a água como elemento e possui mais compatibilidade com Touro, Escorpião, Capricórnio and Peixes.\n"<<
                                "A maior força de Câncer é a sua compaixão, seguida pela sua capacidade de cuidar das pessoas com as quais se preocupa.\n"<<
                                "São, porém, frequentemente ligados ao passado, e ao mesmo tempo ansiosos sobre o futuro, eles podem perder a estabilidade em questão de segundos.\n"<<
                                "Alguns famosos do signo de Câncer são Ariana Grande, Marina Ruy Barbosa, Fábio Porchat, Margot Robbie, Selena Gomez.\n";
                        }else{
                            if(signo == 7){
                                cout<<"Leão é o signo dos nascidos entre 24 de julho a 23 de agosto.\n"<<
                                    "É um signo regido pelo Sol.\n"<<
                                    "Tem o fogo como elemento e possui mais compatibilidade com Gêmeos, Libra, Sagitário e Aquário.\n"<<
                                    "Leão é confiante e cheio de vigor e energia. Isso pode torná-los bem sucedidos em tudo o que se propõem a fazer.\n"<<
                                    "Se um leonino se distanciar muito do seu lado emocional, ele pode se tornar extremamente irritante.\n"<<
                                    "Alguns famosos do signo de Leão são Bruna Marquezine, Daniel Radcliffe, Chris Hemsworth, J. K. Rowling.\n";
                            }else{
                                if(signo == 8){
                                    cout<<"Virgem é o signo dos nascidos entre 24 de agosto a 21 de setembro.\n"<<
                                        "É um signo regido por Mercúrio.\n"<<
                                        "Tem a terra como elemento e possui mais compatibilidade com Touro, Câncer, Escorpião e Peixes.\n"<<
                                        "Virgem é considerado o signo mais inteligente do zodíaco, como o lugar para exaltação de Mercúrio.\n"<<
                                        "A maior fraqueza de qualquer Virgem se esconde em seu mundo emocional. \n"<<
                                        "Alguns famosos do signo de Virgem são Rupert Grint, Beyoncé, Jimmy Fallon, Tom Felton.\n";
                                }else{
                                    if(signo == 9){
                                        cout<<"Libra é o signo dos nascidos entre 22 de setembro a 23 de outubro.\n"<<
                                            "É um signo regido por Vênus.\n"<<
                                            "Tem o ar como elemento e possui mais compatibilidade com Áries, Gêmeos, Leão and Sagitário.\n"<<
                                            "As maiores qualidades de Libra são o seu tato, sofisticação e sua capacidade de assumir a responsabilidade.\n"<<
                                            "O justo Libra sente que servir é a sua obrigação, isso às vezes é colorido com julgamento e ressentimento.\n"<<
                                            "Alguns famosos do signo de Libra são Will Smith, Brie Larson, Noah Schnapp.\n";
                                    }else{
                                        if(signo == 10){
                                            cout<<"Escorpião é o signo dos nascidos entre 24 de outubro a 23 de novembro.\n"<<
                                                "É um signo regido por Marte.\n"<<
                                                "Tem a água como elemento e possui mais compatibilidade com Touro, Câncer, Capricórnio e Peixes.\n"<<
                                                "Embora às vezes possa ser duro mesmo para escorpianos aceitar este fato, sua maior força é sua sensibilidade.\n"<<
                                                "Uma vez que eles se machucam, esta dor atinge muito profundamente e eles têm o desejo de vingança, muitas vezes se tornando cheios de ódio e raiva.\n"<<
                                                "Alguns famosos do signo de Escorpião são Ryan Reynolds, Miley Cyrus, David Schwimmer, Bruna Linzmeyer.\n";
                                        }else{
                                            if(signo == 11){
                                                cout<<"Sagitário é o signo dos nascidos entre 24 de novembro a 21 de dezembro.\n"<<
                                                    "É um signo regido por Júpiter.\n"<<
                                                    "Tem o fogo como elemento e possui mais compatibilidade com Áries, Gêmeos, Leão e Libra..\n"<<
                                                    "Sagitário é um aventureiro, tanto física como mentalmente.\n"<<
                                                    "A maior fraqueza de Sagitário é a sua incapacidade de encontrar um foco.\n"<<
                                                    "Alguns famosos do signo de Sagitário são Scarlett Johansson, Silvio Santos, Taylor Swift.\n";
                                            }else{
                                                cout<<"Capricórnio é o signo dos nascidos entre 22 de dezembro a 21 de janeiro.\n"<<
                                                    "É um signo regido por Saturno.\n"<<
                                                    "Tem a terra como elemento e possui mais compatibilidade com Touro, Câncer, Virgem e Peixes.\n"<<
                                                    "As maiores forças de Capricórnio são a sua ambição, disciplina e paciência.\n"<<
                                                    "Enquanto eles estabelecem metas extremamente difíceis para si, o fazem sem uma base adequada em seus corações.\n"<<
                                                    "Alguns famosos do signo de Capricórnio são Larissa Manoela, Manu Gavassi, Whindersson Nunes.\n";
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

int  perguntarDia(int mes, char mesNome[]){
    int dia;
    char resposta[200];
    char mesMaiusculo[50];
    strcpy (mesMaiusculo,mesNome);
    mesMaiusculo[0] = toupper(mesMaiusculo[0]);
    
    char pergunta[4][100]{
        "Me fale um dia.",
        "Amigão, digite um dia.",
        "Você pode me informar o dia?",
        "Que dia, parceiro?"
    };
    
    srand (time(NULL));
    cout<<pergunta[rand()%3]<<"\n";
    bool errado = true;
    cin>>dia;
    while(errado){
        if((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && (dia >= 1 && dia <= 31)){
            errado = false;
        }else{
            if((mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia >= 1 && dia <= 30)){
                errado = false;
            }else{
                if((mes == 2) && (dia >= 1 && dia <= 29)){
                    errado = false;
                }
            }
        }
        if(errado){
            cout<<mesMaiusculo<<" não tem "<<dia<<" dias. Me fale um dia do mês de "<<mesNome<<".\n";
            cin>>dia;
        }
    }
    char aux[200];
    cin.getline(aux, 200);
    return dia;
}

int identificarSigno(int dia, int mes){
    if((dia >= 22 && mes == 1) || (dia <= 19 && mes == 2)){
        return 1;
    }else{
        if((dia >= 20 && mes == 2) || (dia <= 20 && mes == 3)){
            return 2;
        }else{
            if((dia >= 21 && mes == 3) || (dia <= 20 && mes == 4)){
                return 3;
            }else{
                if((dia >= 21 && mes == 4) || (dia <= 21 && mes == 5)){
                    return 4;
                }else{
                    if((dia >= 22 && mes == 5) || (dia <= 21 && mes == 6)){
                        return 5;
                    }else{
                        if((dia >= 22 && mes == 6) || (dia <= 23 && mes == 7)){
                            return 6;
                        }else{
                            if((dia >= 24 && mes == 7) || (dia <= 23 && mes == 8)){
                                return 7;
                            }else{
                                if((dia >= 24 && mes == 8) || (dia <= 21 && mes == 9)){
                                    return 8;
                                }else{
                                    if((dia >= 22 && mes == 9) || (dia <= 23 && mes == 10)){
                                        return 9;
                                    }else{
                                        if((dia >= 24 && mes == 10) || (dia <= 23 && mes == 11)){
                                            return 10;
                                        }else{
                                            if((dia >= 24 && mes == 11) || (dia <= 21 && mes == 12)){
                                                return 11;
                                            }else{
                                                return 12;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

int intSigno(char resposta[200]){
    int mes = 0;
    char mesNome[20];
    if(strstr(resposta,"janeiro") || strcmp(resposta,"1") == 0){
        mes = 1;
        strcpy (mesNome,"janeiro");
    }else{
        if(strstr(resposta,"fevereiro") || strcmp(resposta,"2") == 0){
            mes = 2;
            strcpy (mesNome,"fevereiro");
        }else{
            if(strstr(resposta,"março") || strstr(resposta,"marco") || strcmp(resposta,"3") == 0){
                mes = 3;
                strcpy (mesNome,"março");
            }else{
                if(strstr(resposta,"abril") || strcmp(resposta,"4") == 0){
                    mes = 4;
                    strcpy (mesNome,"abril");
                }else{
                    if(strstr(resposta,"maio") || strcmp(resposta,"5") == 0){
                        mes = 5;
                        strcpy (mesNome,"maio");
                    }else{
                        if(strstr(resposta,"junho") || strcmp(resposta,"6") == 0){
                            mes = 6;
                            strcpy (mesNome,"junho");
                        }else{
                            if(strstr(resposta,"julho") || strcmp(resposta,"7") == 0){
                                mes = 7;
                                strcpy (mesNome,"julho");
                            }else{
                                if(strstr(resposta,"agosto") || strcmp(resposta,"8") == 0){
                                    mes = 8;
                                    strcpy (mesNome,"agosto");
                                }else{
                                    if(strstr(resposta,"setembro") || strcmp(resposta,"9") == 0){
                                        mes = 9;
                                        strcpy (mesNome,"setembro");
                                    }else{
                                        if(strstr(resposta,"outubro") || strcmp(resposta,"10") == 0){
                                            mes = 10;
                                            strcpy (mesNome,"outubro");
                                        }else{
                                            if(strstr(resposta,"novembro") || strcmp(resposta,"11") == 0){
                                                mes = 11;
                                                strcpy (mesNome,"novembro");
                                            }else{
                                                if(strstr(resposta,"dezembro") || strcmp(resposta,"12") == 0){
                                                    mes = 12;
                                                    strcpy (mesNome,"dezembro");
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if(mes != 0){
        int dia = perguntarDia(mes, mesNome);
        return identificarSigno(dia, mes);
    }else{
        if(strstr(resposta,"aquario") || strstr(resposta,"aquário")){
            return 1;
        }
        if(strstr(resposta,"peixes")){
            return 2;
        }
        if(strstr(resposta,"áries") || strstr(resposta,"aries")){
            return 3;
        }
        if(strstr(resposta,"touro")){
            return 4;
        }
        if(strstr(resposta,"gemeos")){
            return 5;
        }
        if(strstr(resposta,"câncer") || strstr(resposta,"cancer")){
            return 6;
        }
        if(strstr(resposta,"leão") || strstr(resposta,"leao")){
            return 7;
        }
        if(strstr(resposta,"virgem")){
            return 8;
        }
        if(strstr(resposta,"libra")){
            return 9;
        }
        if(strstr(resposta,"escorpião") || strstr(resposta,"escorpiao")){
            return 10;
        }
        if(strstr(resposta,"sagitário") || strstr(resposta,"sagitario")){
            return 11;
        }
        if(strstr(resposta,"capricórnio") || strstr(resposta,"capricórnio")){
            return 12;
        }
        return -1;
    }
}

int main()
{
    char nomeDoRobo[10] = "Rapbot", nomeUsuario[30] = "", resposta[200];
    char greeting[4][100];
    
    strcpy (greeting[0],"Olá, meu nome é ");
    strcat (greeting[0], nomeDoRobo);
    strcat (greeting[0], ". Eu sei falar sobre signos do zodíaco. Qual é o seu nome?");
    
    strcpy (greeting[1],"Opa, ");
    strcat (greeting[1], nomeDoRobo);
    strcat (greeting[1], " aqui para te ajudar. Eu sei falar sobre signos do zodíaco. Como você se chama?");
    
    strcpy (greeting[2],"Ora, ora. Aqui é o ");
    strcat (greeting[2], nomeDoRobo);
    strcat (greeting[2], ". Signos do zodíaco são a minha especialidade. E qual é o seu nome?");
    
    strcpy (greeting[3],"Eae! Eu sou o ");
    strcat (greeting[3], nomeDoRobo);
    strcat (greeting[3], " e signos do zodíaco são o meu esporte. E você, quem é?");
    
    srand (time(NULL));
    cout<<greeting[rand()%3]<<"\n";
    cin.getline(resposta, 200);
    bool lendo = true;
    for(int i = 0; i < strlen(resposta); i++){
        if(resposta[i] != ' '){
            char aux[10] = {resposta[i]};
            strcat (nomeUsuario, aux);
        }else{
            strcpy (nomeUsuario, "");
        }
    }
    
    char pergunta1[4][100];
    
    strcpy (pergunta1[0],"Olá ");
    strcat (pergunta1[0], nomeUsuario);
    strcat (pergunta1[0], ". Me fale um signo ou um mês do ano.");
    
    strcpy (pergunta1[1],"Opa, ");
    strcat (pergunta1[1], nomeUsuario);
    strcat (pergunta1[1], ". Digite um signo ou um mês do ano.");
    
    strcpy (pergunta1[2],"Ora, ora. Que tal você, ");
    strcat (pergunta1[2], nomeUsuario);
    strcat (pergunta1[2], ", me dizer um signo ou um mês do ano?");
    
    strcpy (pergunta1[3],"Eae ");
    strcat (pergunta1[3], nomeUsuario);
    strcat (pergunta1[3], "! Me diga um signo ou um mês do ano.");
    
    strcpy (resposta,"");
    srand (time(NULL));
    cout<<pergunta1[rand()%3]<<"\n";
    cin.getline(resposta, 200);
    
    while(validaNaoDespedida(resposta)){
        
        int signo = intSigno(resposta);
        exibirInformacoesSigno(signo);
        
        if(signo == -1){
            cout<<"Opção inválida. Tente novamente.\n";
            cin.getline(resposta, 200);
        }else{
            srand (time(NULL));
            cout<<pergunta1[rand()%3]<<"\n";
            cin.getline(resposta, 200);
        }
    }
    
    char despedida[4][100];
    
    strcpy (despedida[0],"Tchau, ");
    strcat (despedida[0], nomeUsuario);
    strcat (despedida[0], "!");
    
    strcpy (despedida[1],"Adeus, ");
    strcat (despedida[1], nomeUsuario);
    strcat (despedida[1], "!");
    
    strcpy (despedida[2],"Já vai tarde, ");
    strcat (despedida[2], nomeUsuario);
    strcat (despedida[2], "! Brincadeira, você sabe que eu te amo!");
    
    strcpy (despedida[3],"Até logo, ");
    strcat (despedida[3], nomeUsuario);
    strcat (despedida[3], "!");
    
    srand (time(NULL));
    cout<<despedida[rand()%3]<<"\n";
    return 0;
}
