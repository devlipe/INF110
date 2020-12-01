#include <iostream>
#include <ctime>
#include <cstring>
#include <cstdlib>
#include <clocale>
using namespace std;


typedef enum mes{Janeiro = 1, Fevereiro, Marco, Abril, Maio, Junho , Julho , Agosto, Setembro, Outubro, Novembro, Dezembro, Vazio}mes;

typedef enum signos{Carpricornio = 1, Aquario, Peixes, Aries, Touro, Gemeos, Cancer, Leao, Virgem, Libra, Escorpiao, Sagitario , Erro} signos;

typedef struct Data
{
    mes m = Vazio;
    int dia = 0;
}Data;

//Funcao que verifica se o usuario esta se despedindo
bool verifica_despedida(char resposta[201])
{   
    for (int i = 0; i < strlen(resposta); i++)
    {
        resposta[i] = tolower(resposta[i]);
    }
    
    if (strstr(resposta, "tchau") || strstr(resposta, "adeus") || strstr(resposta, "ate mais") || strstr(resposta, "chega"))
    {
        return true;
    }
    
    return false;
}

// Funcao para imprimir o mes quando o numero de dias exceder o normal
char * print_mes(mes m)
{
    static char aux[15];
    
    switch (m)
    {
    case Janeiro:
        strcpy(aux,"Janeiro");
        return aux;
        break;
    case Fevereiro:
        strcpy(aux,"Fevereiro");
        return aux;
        break;
    case Marco:
        strcpy(aux, "Março");
        return aux;
        break;
    case Abril:
        strcpy(aux, "Abril");
        return aux;
        break;
    case Maio:
        strcpy(aux, "Maio");
        return aux;
        break;
    case Junho:
        strcpy(aux, "Junho");
        return aux;
        break;
    case Julho:
        strcpy(aux, "Julho");
        return aux;
        break;
    case Agosto:
        strcpy(aux, "Agosto");
        return aux;
        break;
    case Setembro:
        strcpy(aux, "Setembro");
        return aux;
        break;
    case Outubro:
        strcpy(aux, "Outubro");
        return aux;
        break;
    case Novembro:
        strcpy(aux, "Novembro");
        return aux;
        break;
    case Dezembro:
        strcpy(aux, "Dezembro");
        return aux;
        break;
    default: strcpy(aux, "erro");
    }
    
    return aux;
}

void get_dia(Data &data_resp)
{
    char resposta[101];
    char pergunta[4][101]
    {
        "Você poderia então me falar um dia?",
        "Agora eu só preciso do dia.",
        "Eu sou um físico teórico, não um advinha, me fale um dia!",
        "Só me falta saber o dia."
    };
    bool correto = false;

    srand(time(NULL));
    cout << pergunta[rand()%4] << endl;
    cin >> data_resp.dia;

    while (!correto)
    {
        if ((data_resp.m == Janeiro || data_resp.m == Marco || data_resp.m == Maio || data_resp.m == Julho || data_resp.m == Agosto || data_resp.m == Outubro || data_resp.m == Dezembro) && (data_resp.dia >= 1 && data_resp.dia <= 31) )
        {
            correto = true;
        }
        else
        {
            if ((data_resp.m == Abril || data_resp.m == Junho || data_resp.m == Setembro || data_resp.m == Novembro) && (data_resp.dia >=1 && data_resp.dia <=30))
            {
                correto = true;
            }
            else if (data_resp.m == Fevereiro && data_resp.dia >= 1 && data_resp.dia <= 29)
            {
                correto = true;
            }
        }
        if (!correto)
        {
            cout  << "\n "<< print_mes(data_resp.m) << " não tem " << data_resp.dia << " dias, até a Penny sabe disso. Digite um valor adequado." << endl;
            cin >> data_resp.dia;
        }
    }
    cin.ignore();
}

signos data_signo(const Data data_resp)
{
    if ((data_resp.m == Dezembro && data_resp.dia >= 22) || (data_resp.m == Janeiro && data_resp.dia <=19))
    {
        return Carpricornio;
    }
    else if ((data_resp.m == Janeiro && data_resp.dia >= 20) || (data_resp.m == Fevereiro && data_resp.dia <= 18))
    {
        return Aquario;
    }
    else if ((data_resp.m == Fevereiro && data_resp.dia >= 19) || (data_resp.m == Marco && data_resp.dia <= 20))
    {
        return Peixes;
    }
    else if ((data_resp.m == Marco && data_resp.dia >= 21) || (data_resp.m == Abril && data_resp.dia <= 19))
    {
        return Aries;
    }
    else if ((data_resp.m == Abril && data_resp.dia >= 20) || (data_resp.m == Maio && data_resp.dia <= 20))
    {
        return Touro;
    }
    else if ((data_resp.m == Maio && data_resp.dia >= 21) || (data_resp.m == Junho && data_resp.dia <= 21))
    {
        return Gemeos;
    }
    else if ((data_resp.m == Junho && data_resp.dia >= 22) || (data_resp.m == Julho && data_resp.dia <= 22))
    {
        return Cancer;
    }
    else if ((data_resp.m == Julho && data_resp.dia >= 23) || (data_resp.m == Agosto && data_resp.dia <= 22))
    {
        return Leao;
    }
    else if ((data_resp.m == Agosto && data_resp.dia >= 23) || (data_resp.m == Setembro && data_resp.dia <= 22))
    {
        return Virgem;
    }
    else if ((data_resp.m == Setembro && data_resp.dia >= 23) || (data_resp.m == Outubro && data_resp.dia <= 22))
    {
        return Libra;
    }
    else if ((data_resp.m == Outubro && data_resp.dia >= 23) || (data_resp.m == Novembro && data_resp.dia <= 21))
    {
        return Escorpiao;
    }
   
    return Sagitario;
}

signos Identifica_signos_data(char resposta[201])
{
    Data data_resp; 
    data_resp.m = Vazio;

    //Sequencia para descobrir o signo

    if (strstr(resposta,"capricornio") || strstr(resposta, "capricórnio"))
    {
        return Carpricornio;
    }
    else if (strstr(resposta, "aquario") || strstr(resposta, "aquário"))
    {
        return Aquario;
    }
    else if (strstr(resposta, "peixes"))
    {
        return Peixes;
    }
    else if (strstr(resposta, "Áries") || strstr(resposta, "áries") || strstr(resposta, "aries"))
    {
        return Aries;
    }
    else if (strstr(resposta, "touro"))
    {
        return Touro;
    }
    else if (strstr(resposta, "gemeos") || strstr(resposta, "gêmeos"))
    {
        return Gemeos;
    }
    else if (strstr(resposta, "cancer") || strstr(resposta, "câncer"))
    {
        return Cancer;
    }
    else if (strstr(resposta, "leao") || strstr(resposta, "leão"))
    {
        return Leao;
    }
    else if (strstr(resposta, "virgem"))
    {
        return Virgem;
    }
    else if (strstr(resposta, "libra"))
    {
        return Libra;
    }
    else if (strstr(resposta, "escorpião") || strstr(resposta, "escorpiao"))
    {
        return Escorpiao;
    }
    else if (strstr(resposta, "sagitario") || strstr(resposta, "sagitário"))
    {
        return Sagitario;
    } 

    // Sequencia para descobrir a data

    if (strstr(resposta, "janeiro") || strchr(resposta, '1') != NULL)
    {
        data_resp.m = Janeiro;
    }
    else if (strstr(resposta, "fevereiro") || strchr(resposta, '2') != NULL)
    {
        data_resp.m = Fevereiro;
    }
    else if (strstr(resposta, "marco") || strstr(resposta,"março") ||strchr(resposta, '3') != NULL)
    {
        data_resp.m = Marco;
    }
    else if (strstr(resposta, "abril") || strchr(resposta, '4') != NULL)
    {
        data_resp.m = Abril;
    }
    else if (strstr(resposta, "maio") || strchr(resposta, '5') != NULL)
    {
        data_resp.m = Maio;
    }
    else if (strstr(resposta, "junho") || strchr(resposta, '6') != NULL)
    {
        data_resp.m = Junho;
    }
    else if (strstr(resposta, "julho") || strchr(resposta, '7') != NULL)
    {
        data_resp.m = Julho;
    }
    else if (strstr(resposta, "agosto") || strchr(resposta, '8') != NULL)
    {
        data_resp.m = Agosto;
    }
    else if (strstr(resposta, "setembro") || strchr(resposta, '9') != NULL)
    {
        data_resp.m = Setembro;
    }
    else if (strstr(resposta, "outubro") || strcmp(resposta, "10") == 0)
    {
        data_resp.m = Outubro;
    }
    else if (strstr(resposta, "novembro") || strcmp(resposta, "11") == 0)
    {
        data_resp.m = Novembro;
    }
    else if (strstr(resposta, "dezembro") || strcmp(resposta, "12") == 0)
    {
        data_resp.m = Dezembro;
    }

    //Caso o usuario digite um mes, temos que descobrir o dia do mes

    if (data_resp.m != Vazio)
    {
        get_dia(data_resp);
        return data_signo(data_resp);
    }

    return Erro;
}

void fala_signos(signos sig)
{
    switch (sig)
    {
    case Carpricornio:
        cout << "capricornio";
        break;
    case Aquario:
        cout << "aquario";
        break;
    case Peixes:
        cout << "peixes";
        break;
    case Aries:
        cout << "aries";
        break;
    case Touro:
        cout << "touro";
        break;
    case Gemeos:
        cout << "gemeos";
        break;
    case Cancer:
        cout << "cancer";
        break;
    case Leao:
        cout << "leao";
        break;
    case Virgem:
        cout << "virgem";
        break;
    case Libra:
        cout << "libra";
        break;
    case Escorpiao:
        cout << "escorpiao";
        break;
        case Sagitario:
        cout << "sagitario";
        break;
    default:
        cout << "Como posso estar esquecendo de alguma coisa?? Acho que você está tentando me enganar!";
        break;
    }
}

int main()
{
    char saudacoes[4][170] = 
    {
        "Olá, meu nome é Dr. Sheldon Cooper e você está no meu lugar! Saia daí e me diga seu nome, aí sim poderemos comecar a falar sobre os signos do zodíaco!", 
        "Oh! Você chegou. Meu nome é Dr. Sheldon Cooper, e você está no Dr. Sheldon Copper apresenta diversão com o zodíaco! Me diga o seu nome!", 
        "Não, eu não sou louco, minha mãe me teve testado! Eu sou o Dr. Sheldon Cooper. Me diga seu nome, e assim poderemos falar sobre os signos do zodíaco!", 
        "BAZINGA! Meu nome é Dr. Sheldon Cooper, estamos aqui para falar sobre os signos do zodíaco, me fale seu nome para comecarmos!"
    };
    char resposta[201], nome[30];
    char * aux;
    char pergunta[4][100];
    char despedida[4][100];

    srand(time(NULL));
    cout << saudacoes[rand()%4] << endl;
    cin.getline(resposta,201);
    aux = strtok(resposta, " ,");
    while (aux != NULL)
    {
        strcpy (nome, aux);
        aux = strtok(NULL, " ,");
    } 
    nome[0] = toupper(nome[0]);
    //Pergunta 1
    strcpy(pergunta[0], "Olá ");
    strcat(pergunta[0], nome);
    strcat(pergunta[0], ", espero que não seja um engenheiro, agora me diga um signo ou um mês do ano.");
    // Pergunta 2
    strcpy(pergunta[1], "Que bom te ver ");
    strcat(pergunta[1], nome);
    strcat(pergunta[1], ", agora me diga um signo ou um mês do ano, te falarei tudo devido a minha memória fotográfica.");
    //Pergunta 3
    strcpy(pergunta[2], "Como vai, ");
    strcat(pergunta[2], nome);
    strcat(pergunta[2], "? Me diga um signo ou um mês do ano.");
    //Pergunta 4
    strcpy(pergunta[3], "Olá ");
    strcat(pergunta[3], nome);
    strcat(pergunta[3], ", quer jogar um jogo? Me fale um signo ou um mês do ano.");

    strcpy(resposta, "");
    cout << pergunta[rand()%4] << endl;
    cin.getline(resposta, 201);

    while(!verifica_despedida(resposta))
    {
        signos sig;
        sig = Identifica_signos_data(resposta);
        fala_signos(sig);
        
        if (sig == Erro)
        {
            cout << "Ha Ha! Não vai ser você quem vai me enganar, tente novamente.\n";
            cin.getline(resposta, 201);
        }
        else
        {
            srand(time(NULL));
            cout << pergunta[rand()%4] << endl;
            cin.getline(resposta, 201);
        }

    }

    //Despedida 1
    strcpy (despedida[0],"Vida longa e próspera, ");
    strcat (despedida[0], nome);
    strcat (despedida[0], "!");
    //Despedida 2  
    strcpy (despedida[1],"Ahh você ja vai? Até mais, ");
    strcat (despedida[1], nome);
    strcat (despedida[1], "!");
    //Despedida 3
    strcpy (despedida[2],"Nem para cantar soffty kitty antes de ir em?!");
    //Despedida 4
    strcpy (despedida[3],"E assim nós encerramos mais um episódio de Dr. Sheldon Cooper apresenta Diversão com o zodíaco!");

    srand (time(NULL));
    cout<<despedida[rand()%3]<<"\n";
    return 0;
}