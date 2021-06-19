#include <iostream>
#include <ctime>
#include <cstring>
#include <cstdlib>
#include <locale.h>
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

void get_dia(Data &data_resp, char nome[30])
{
    char resposta[101];
    char pergunta[4][101]
    {
        "(Dr. Cooper)\tVocê poderia então me falar um dia?",
        "(Dr. Cooper)\tAgora eu só preciso do dia.",
        "(Dr. Cooper)\tEu sou um físico teórico, não um advinha, me fale um dia!",
        "(Dr. Cooper)\tSó me falta saber o dia."
    };
    bool correto = false;

    srand(time(NULL));
    cout << pergunta[rand()%4] << endl;
    cout <<"(" << nome << ")\t";
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
            cout  << "\n(Dr. Cooper)\t"<< print_mes(data_resp.m) << " não tem " << data_resp.dia << " dias, até a Penny sabe disso. Digite um valor adequado." << endl;
            cout <<"(" << nome << ")\t";
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

signos Identifica_signos_data(char resposta[201], char nome[30])
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

    if (strstr(resposta, "janeiro") || strcmp(resposta, "1") == 0)
    {
        data_resp.m = Janeiro;
    }
    else if (strstr(resposta, "fevereiro") || strcmp(resposta, "2") == 0)
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
        get_dia(data_resp, nome);
        return data_signo(data_resp);
    }

    return Erro;
}

void fala_signos(signos sig)
{
    switch (sig)
    {
    case Carpricornio:
        cout << "(Dr. Cooper)\tCapricórnio é o signo dos nascidos entre 12 de dezembro a 19 de janeiro.\n"<<
                "\tÉ um signo regido por Saturno.\n"<<
                "\tTem a terra como elemento e possui mais compatibilidade com touro, câncer, virgem e peixes."<<
                "\tAs maiores forças de Capricórnio são a sua ambição, disciplina e paciência.\nCom sua capacidade de planejar com antecedência e pensar em todas as etapas necessárias em sua determinação em atingir um determinado objetivo, eles são muitas vezes bem-sucedidos em sua carreira.\nConfiáveis e dedicados, esses indivíduos têm dificuldade em se abrir para outras pessoas, mas se tornam leais e estáveis em um relacionamento, uma vez que decidem fazer parte dele.\nCom sua resistência e paciência, não há quase nada que pareça impossível.\n" <<
                "\tAlguns famosos do signo de Capricórnio são Kate Middleton, Whindersson Nunes e Michelle Obama\n\n";
        break;
    case Aquario:
        cout << "(Dr. Cooper)\tAquário é os signo dos nascidos entre 20 de janeiro a 18 de fevereiro.\n"<<
                "\tÉ un signo regido por Saturno e Urano.\n" << 
                "\tTem o ar como elemento e possui mais afinidade com Áries, Gêmeos, Leão e Libra.\n"<<
                "\tO signo de Aquário é inteligente, energético e cheio de ideias brilhantes, mas ao mesmo tempo muito humano e honestamente voltado para o bem-estar da raça humana.\nEles vão agitar o mundo de todos ao seu redor, inspirá-los a fazer as mudanças necessárias, sem medo de mostrar a individualidade.\nExcêntricos e um pouco estranhos, Aquário é alguém cuja companhia nunca será chata, cheio de anedotas interessantes, experiências emocionantes e eventos um pouco estranhos que precisam ser compartilhados através de uma incrível comunicação.\n" <<
                "\tAlguns famosos do signo de Aquário são Abraham Lincoln, Galileo Galilei, Charles Darwin e Thomas Edison.\n\n";
        break;
    case Peixes:
        cout << "(Dr. Cooper)\tPeixes é o signo dos nascidos entre 19 de fevereiro a 20 de março.\n" <<
                "\tÉ um signo regido por Júpiter e Neturno.\n" << 
                "\tTem a água como elemento e possui mais afinidade com Virgem e Touro\n" << 
                "\tUma das maiores forças de um Peixes é a sua imaginação, que desperta a sua criatividade, foco e dedicação, uma vez que se comprometem com uma determinada causa.\nEsses indivíduos são talentosos, compassivos e sensíveis, sempre com uma visão que precisam tornar realidade.\nEles vão se adaptar com facilidade, ser espontâneos e cheios de surpresas, e ao mesmo tempo dotados de uma forte fé na importância das relações com outras pessoas.\nIdealista e talentoso, é alguém em busca de sua própria utopia.\n" <<
                "\tAlguns famosos do signo de Peixes são Albert Einstein, Mikhail Gorbachev, Michelangelo e George Washington\n\n";
        break;
    case Aries:
        cout << "(Dr. Cooper)\tÁries é o signo dos nascidos entre 21 de março a 19 de abril.\n" << 
                "\tÉ um signo regido por Marte.\n" << 
                "\tTem o fogo como elemento e possui mais afinidade com Leão, Libra, Sagitário e Aquário.\n" << 
                "\tÁries é corajoso e considerado o signo mais forte do zodíaco.\nSempre correndo à frente sem medo, pronto para qualquer desafio ou batalha que encontre em seu caminho, estes indivíduos não se prendem ao passado ou ficam se lamentando pelo que já esteja morto e enterrado.\nSuas características positivas são o entusiasmo, otimismo, independência, força, iniciativa e generosidade.\n"<<
                "\tAlguns famosos do signo de áries são Leonardo da Vinci, Otto Von Bismarck e Thomas Jefferson.\n\n";
        break;
    case Touro:
        cout << "(Dr. Cooper)\tTouro é o signo dos nascidos entre 20 de abril a 20 de maio.\n" <<
                "\tÉ um signo regido por Vênus.\n" << 
                "\tTem a terra como elemento e possui mais afinidade com Câncer, Virgem, Escorpião e Capricórnio.\n" << 
                "\tTouro é conhecido por seu apego e confiabilidade.\nGentil, confiável e cuidador, eles sempre estenderão uma mão amiga, sempre preparados para ajudar os outros a seguir em frente quando encontram-se emperrados.\nCompreendem as formas do mundo material, o que faz deles bons conselheiros financeiros e bancários.\nForte e determinado, sempre preparado para suportar tudo a longo prazo, eles farão qualquer coisa para agradar os entes queridos.\n" <<
                "\tAlguns famosos do signo de touro são Adolf Hitler, Elizabeth II, Harry Truman e Oliver Cromwell.\n\n";
        break;
    case Gemeos:
        cout << "(Dr. Cooper)\tGêmeos é o signo dos nascidos entre 21 de maio a 21 de junho.\n" <<
                "\tÉ um signo regido por Mercúrio.\n" << 
                "\tTem o ar como elemento e possui mais afinidade com Leão, Libra, Sagitário e Aquário.\n" <<
                "\tPessoas nascidas com o Sol em Gêmeos são espirituosas, rápidas, adaptáveis e inteligentes.\nSua sagacidade e senso de humor irão ajudá-lo a superar qualquer dificuldade que a vida trouxer, enquanto o dom da comunicação é o seu maior trunfo.\nDivertido e sempre aberto às novas amizades, experiências e aventuras, os geminianos têm uma maneira de impor o seu carisma a todos à sua volta, tornando tudo leve e despreocupante.\n"<<
                "\tAlguns famosos do signo de gêmeos são John F. Kennedy, Marilyn Monroe, Donnald Trump, Anne Frank e Paul McCartney.\n\n";
        break;
    case Cancer:
        cout << "(Dr. Cooper)\tCâncer é o signo dos nascidos entre 22 de junho a 22 de julho.\n" <<
                "\tÉ um signo regido pela Lua.\n" << 
                "\tTem a água como elemento e possui afinidade com Touro, Escorpião, Capricórnio and Peixes.\n" <<
                "\tA maior força de Câncer é a sua compaixão, seguida pela sua capacidade de cuidar das pessoas com as quais se preocupa.\nNascidos com uma capacidade extremamente elevada para a empatia, eles podem ter dificuldade em encontrar seus limites.\nNo entanto, quando eles perdem o medo de se machucar e aceitam corajosamente os desafios emocionais, eles se tornam indivíduos adaptáveis e confiáveis, que realmente apreciam a sua abordagem maternal para com os necessitados.\n" <<
                "\tAlguns famosos do signo de câncer são Júlio César, Alexandre o grande e Henrique VIII.\n\n";
        break;
    case Leao:
        cout << "(Dr. Cooper)\tLeão é o signo dos nascidos entre 23 de julho a 22 de agosto.\n" <<
                "\tÉ um signo regido pelo sol.\n"<<
                "\tTem o fogo como elemento e possui afinidade com Gêmeos, Libra, Sagitário e Aquário.\n"<<
                "\tLeão é confiante e cheio de vigor e energia.\nIsso pode torná-los bem-sucedidos em tudo o que se propõem a fazer.\nEstas qualidades podem ser contagiosas para aqueles ao seu redor, e isso resulta em uma grande quantidade de energia criativa e possibilidades se abrindo na frente de todos aqueles que gostam de sua presença.\nDeterminado e leal, leoninos serão bons amigos, e seu calor e natureza infantil farão com que seja um prazer estar em sua companhia na maior parte do tempo.\nEles sabem o que significa respeito e nunca comprometerão o progresso pessoal de alguém conscientemente, não importa o quão difícil seja o caminho.\n"<<
                "\tAlguns famosos do signo de leão são Napoleão Bonaparte, Benito Mussolini, Barack Obama e Alexander Fleming.\n\n";
        break;
    case Virgem:
        cout << "(Dr. Cooper)\tVirgem é o signo dos nascidos entre 23 de agosto a 22 de setembro.\n"<<
                "\tÉ um signo regido por Mercúrio.\n"<<
                "\tTem a terra como elemento e possui afinidade com Touro, Câncer, Escorpião e Peixes.\n"<<
                "\tVirgem é considerado o signo mais inteligente do zodíaco, como o lugar para exaltação de Mercúrio.\nEles são, na verdade, extremamente práticos e inteligentes quando se trata de questões cotidianas.\nAnalítico e profundo, sua maior força é a sua mente, que deve ser usada para resolver questões da vida que, obviamente, aparecem a eles por uma razão.\nAsseado e minucioso, um virginiano vai deixar tudo o que foi quebrado, manchado ou estragado, limpo, remendado e funcionando perfeitamente.\nÉ por isso que muitas vezes são considerados curandeiros, pois têm um talento para consertar corações partidos, almas, egos ou corpos.\n"<<
                "\tAlguns famosos do signo de virgem são Michael Jackson, Madre Teresa, Kobe Bryant e Freddie Mercury.\n\n";
        break;
    case Libra:
        cout << "(Dr. Cooper)\tLibra é o signo dos nascidos entre 23 de setembro a 22 de outubro.\n"<<
                "\tÉ um signo regido por Vênus.\n"<<
                "\tTem o ar como elemento e possui afinidade com Áries, Gêmeos, Leão and Sagitário.\n" <<
                "\tAs maiores qualidades de Libra são o seu tato, sofisticação e sua capacidade de assumir a responsabilidade.\nEste é um signo que nos leva ao veredito final, e quando em um bom lugar, satisfeito e confiante, Libra pode ser justo e incrivelmente equilibrado.\nAlgo que eles se esforçam para atingir é a qualidade nos seus relacionamentos e eles vão gastar um bocado de energia encontrando maneiras de melhorar a vida daqueles em torno deles.\n"<<
                "\tAlguns famosos do signo de libra são Mahatma Gandhi, John Lennon, Margaret Thatcher e São Francisco de Assis.\n\n";
        break;
    case Escorpiao:
        cout << "(Dr. Cooper)\tEscorpião é o signo dos nascidos entre 23 de outubro a 21 de novembro.\n" <<
                "\tÉ um signo regido por Marte e Plutão.\n"<<
                "\tTem a água como elemento e possui afinidade com Touro, Câncer, Capricórnio e Peixes.\n"
                "\tEmbora às vezes possa ser duro mesmo para escorpianos aceitar este fato, sua maior força é sua sensibilidade.\nEnquanto muitos escondem suas próprias emoções, sem saber o que fazer com sua intensidade e profundidade, quando encontram uma maneira de regenerar e perdoar aqueles que os machucam, eles se tornam meio médicos, psicólogos, parceiros e amigos incríveis.\n"<<
                "\tAlguns famosos do signo de escorpião são Cristóvão Colombo, Theodore Roosvelt, Marie Curie, Bill Gates e Joe Biden.\n\n";
        break;
        case Sagitario:
        cout << "(Dr. Cooper)\tSagitário é o signo dos nascidos entre 22 de novembro a 21 de dezembro.\n"<<
                "\tÉ un signo regido por Júpiter.\n"<<
                "\tTem o fogo como elemento e possui afinidade com Áries, Gêmeos, Leão e Libra.\n"<<
                "\tSagitário é um aventureiro, tanto física como mentalmente.\nPessoas nascidas sob este signo solar têm uma mente ampla e são capazes de mudar sua perspectiva com facilidade, até encontrar a versão correta das palavras, eventos ou razões que desejam examinar.\nAltamente adaptáveis e com uma compreensão profunda de diferentes pessoas, nações, países, governos e em geral – formas de vida, eles se misturam perfeitamente com os nativos, onde quer que estejam.\nEles precisam de bastante espaço, não querem ser contidos em sua casa, pelo seu parceiro ou de qualquer outra forma.\nMovimentação vai carregar as suas baterias, energizá-los e torná-los confiantes e fortes.\nIndependentes, otimistas e sinceros, são amigos que você quer em sua vida, especialmente se você precisa de alguém para ajudá-lo a encontrar a esperança ou um propósito para qualquer coisa que o incomoda.\n"
                "\tAlguns famosos do signo de sagitário são Winston Churchill, Joseph Stalin, Nero, Ludwig van Beethoven, Frank Sinatra e Jimi Hendrix.\n\n";
        break;
    default:
        cout << "(Dr. Cooper)\tComo posso estar esquecendo de alguma coisa?? Acho que você está tentando me enganar!\n";
        break;
    }

}

int main()
{
    setlocale(LC_ALL, ".utf8");

    char saudacoes[4][201] = 
    {
        "(Dr. Cooper)\tOlá, meu nome é Dr. Sheldon Cooper e você está no meu lugar! Saia daí e me diga seu nome, aí sim poderemos comecar a falar sobre os signos do zodíaco!", 
        "(Dr. Cooper)\tOh! Você chegou. Meu nome é Dr. Sheldon Cooper, e você está no Dr. Sheldon Copper apresenta diversão com o zodíaco! Me diga o seu nome!", 
        "(Dr. Cooper)\tNão, eu não sou louco, minha mãe me teve testado! Eu sou o Dr. Sheldon Cooper. Me diga seu nome, e assim poderemos falar sobre os signos do zodíaco!", 
        "(Dr. Cooper)\tBAZINGA! Meu nome é Dr. Sheldon Cooper, estamos aqui para falar sobre os signos do zodíaco, me fale seu nome para começarmos!"
    };
    char resposta[201], nome[30];
    char * aux;
    char pergunta[4][201];
    char despedida[4][201];

    srand(time(NULL));
    cout << saudacoes[rand()%4] << endl;
    cout << "(User)\t";
    cin.getline(resposta,201);
    aux = strtok(resposta, " ,");
    while (aux != NULL)
    {
        strcpy (nome, aux);
        aux = strtok(NULL, " ,");
    } 
    nome[0] = toupper(nome[0]);
    //Pergunta 1
    strcpy(pergunta[0], "(Dr. Cooper)\tOlá ");
    strcat(pergunta[0], nome);
    strcat(pergunta[0], ", espero que não seja um engenheiro, agora me diga um signo ou um mês do ano.");
    // Pergunta 2
    strcpy(pergunta[1], "(Dr. Cooper)\tQue bom te ver ");
    strcat(pergunta[1], nome);
    strcat(pergunta[1], ", agora me diga um signo ou um mês do ano, te falarei tudo devido a minha memória fotográfica.");
    //Pergunta 3
    strcpy(pergunta[2], "(Dr. Cooper)\tComo vai, ");
    strcat(pergunta[2], nome);
    strcat(pergunta[2], "? Me diga um signo ou um mês do ano.");
    //Pergunta 4
    strcpy(pergunta[3], "(Dr. Cooper)\tOlá ");
    strcat(pergunta[3], nome);
    strcat(pergunta[3], ", quer jogar um jogo? Me fale um signo ou um mês do ano.");

    strcpy(resposta, "");
    srand(time(NULL));
    cout << pergunta[rand()%4] << endl;
    cout <<"(" << nome << ")\t";
    cin.getline(resposta, 201);

    while(!verifica_despedida(resposta))
    {
        signos sig;
        sig = Identifica_signos_data(resposta, nome);
        fala_signos(sig);
        
        if (sig == Erro)
        {
            cout << "(Dr. Cooper)\tHa Ha! Não vai ser você quem vai me enganar, tente novamente.\n";
            cout <<"(" << nome << ")\t";
            cin.getline(resposta, 201);
        }
        else
        {
            srand(time(NULL));
            cout << pergunta[rand()%4] << endl;
            cout <<"(" << nome << ")\t";
            cin.getline(resposta, 201);
        }

    }

    //Despedida 1
    strcpy (despedida[0],"(Dr. Cooper)\tVida longa e próspera, ");
    strcat (despedida[0], nome);
    strcat (despedida[0], "!");
    //Despedida 2  
    strcpy (despedida[1],"(Dr. Cooper)\tAhh você ja vai? Até mais, ");
    strcat (despedida[1], nome);
    strcat (despedida[1], "!");
    //Despedida 3
    strcpy (despedida[2],"(Dr. Cooper)\tNem para cantar soffty kitty antes de ir em?!");
    //Despedida 4
    strcpy (despedida[3],"(Dr. Cooper)\tE assim nós encerramos mais um episódio de Dr. Sheldon Cooper apresenta Diversão com o zodíaco!");

    srand (time(NULL));
    cout<<despedida[rand()%3]<<"\n";
    return 0;
}