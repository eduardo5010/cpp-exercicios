/*
> Discente: Eduardo Santos Ferreira
> Matrícula: 121210323
> Período: 2022.2
> Curso: Engenharia Elétrica
> Disciplina: Tecnícas de Programação 
> Turma: 01
> Professor: MARCUS SALERNO 
> Unidade 5: LVP-09
Descrição do LVP:
*/

// Este arquivo utiliza a seguinte codificação: UTF-8

/*Neste LVP, será necessário criar um pequeno jogo de combate com personagens que tem como atributos o nome, a quantidade de vida, o dano, a arma e o alcance do ataque. 
O jogo terá apenas dois tipos de personagens: lutadores e atiradores.

O lutador poderá ter até uma arma. Contudo, ele poderá lutar desarmado (sem uma arma), você pode criar um atributo para informar se o lutador está desarmado ou não, e 
seu alcance de ataque não poderá ser superior a 3 metros.

O atirador possui apenas uma arma com um tipo de munição, ambas são tipos. O alcance do atirador não pode ser inferior a 10 metros nem superior a 50 metros. 
A qualidade do atirador será avaliada com base em seu alcance: um alcance de 10 e inferior ou igual a 15 metros será considerado "Ruim", um alcance acima de 15 e 
inferior ou igual a 25 metros será considerado "Bom", um alcance acima de 25 e inferior ou igual a 40 metros será considerado "Muito bom" e um alcance acima de
40 metros e inferior ou igual a 50 metros será considerado "Excelente".

O que realmente terá influência no combate será o dano e o alcance dos personagens.

O jogo terá uma lista de lutadores e uma lista de atiradores. Ambas as listas terão métodos para adicionar, excluir e pesquisar personagens, bem como para 
exibir todas as informações dos personagens.

O jogo terá dois sistemas de combate. Portanto, serão sistemas separados para lutadores e atiradores. Dois lutadores ou dois atiradores serão selecionados 
para o combate no seu respectivo método de combate, mas não será possível um lutador lutar com um atirador ou vice-versa. O personagem com o maior dano e 
com maior alcance será o vencedor. O personagem só ganham se tiver as duas condições. Caso não tenha, é empate. O combate não ocorrerá se a lista tiver 
menos de dois personagens ou se o mesmo personagem for selecionado duas vezes. O perdedor do combate sofrerá uma redução de menos um em sua vida. 
Se o valor de sua vida, chegar a zero, o personagem morre e será excluído da lista. Para realização desse método de combate pode-se pensar em fazer outros métodos.

Haverá uma classe mãe que conterá as informações em comum entre os personagens com classes separadas para lutadores e atiradores que herdarão as informações da classe mãe. 
Além disso, haverá uma classe combate separada para as listas com os outros métodos, nessa classe será incluído o sistema de combate. Um menu será criado na main para acessar todos esses métodos.*/

// Importando bibliotecas
#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include "LVP09.cpp"

using namespace std;

// Função principal
int main()
{

    setlocale(LC_ALL, "Portuguese");

    // Instanciando objeto do tipo jogo
    Jogo jogo;

    // Declarando variável
    int opcao;

    do
    {
        // Menu principal
        cout << "=================================" << endl;
        cout << "1) Adicionar um lutador" << endl;
        cout << "2) Excluir um lutador" << endl;
        cout << "3) Exibir um lutador" << endl;
        cout << "4) Exibir todos os lutadores" << endl;
        cout << "5) Combate lutador" << endl;
        cout << "6) Adicionar um atirador" << endl;
        cout << "7) Excluir um atirador" << endl;
        cout << "8) Exibir um atirador" << endl;
        cout << "9) Exibir todos os atiradores" << endl;
        cout << "10) Combate atirador" << endl;
        cout << "0) Sair do jogo" << endl;
        cout << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        // Chamando métodos do objeto do tipo jogo
        switch (opcao)
        {
        case 1:
        {
            // Adiciona um novo lutador na fila
            Lutador lutador;
            string nome;
            int vida;
            int dano;
            string arma;
            int alcance;
            cout << "Digite o nome do lutador: ";
            cin.ignore();
            getline(cin, nome);
            lutador.setNome(nome);
            cout << "Digite o número da Vida do lutador: ";
            cin >> Vida;
            lutador.setVida(vida);
            cout << "Digite o número do Dano do lutador: ";
            cin.ignore();
            cin >> Dano;
            lutador.setDano(dano);
            cout << "Digite o motivo do atendimento: ";
            cin.ignore();
            getline(cin, arma);
            lutador.setArma(arma);
            bool resultado = jogo.adicionarlutadorFila(lutador);
            if (resultado)
            {
                cout << "Lutador cadastrado na fila com sucesso!" << endl;
            }
            break;
        }
        case 2:
        {
            // Atende um lutador
            bool resultado = jogo.atenderlutador();
            if (resultado)
            {
                cout << "Lutador atendido com sucesso!" << endl;
            }
            else
            {
                cout << "Nenhum lutador na fila de espera!" << endl;
            }
            break;
        }
        case 3:
        {
            // Exibe/busca um lutador na lista de atendidos
            int Vida;
            cout << "Digite o número da vida do lutador: ";
            cin >> Vida;
            bool resultado = jogo.exibirLutadorAtendido(Vida);
            if (!resultado)
            {
                cout << "Lutador não encontrado!" << endl;
            }
            break;
        }
        case 4:
        {
            // Exibe todos os lutadores já atendidos
            bool resultado = jogo.exibirRelatorio();
            if (!resultado)
            {
                cout << "Não há lutadores no relatório" << endl;
            }
            break;
        }
        case 6:
        {
            // Adiciona um novo atirador na fila
            Atirador atirador;
            string nome;
            int vida;
            int dano;
            string arma;
            int alcance;
            cout << "Digite o nome do atirador: ";
            cin.ignore();
            getline(cin, nome);
            lutador.setNome(nome);
            cout << "Digite a quantidade de vida do atirador: ";
            cin >> vida;
            lutador.setVida(vida);
            cout << "Digite o dano do atirador: ";
            cin.ignore();
            cin >> dano;
            lutador.setDano(dano);
            cout << "Digite a arma do atirador: ";
            cin.ignore();
            getline(cin, arma);
            lutador.setArma(arma);
            bool resultado = jogo.adicionarAtiradorFila(atirador);
            if (resultado)
            {
                cout << "Atirador cadastrado na fila com sucesso!" << endl;
            }
            break;
        }
        case 7:
        {
            // Atende um atirador
            bool resultado = jogo.atenderlutador();
            if (resultado)
            {
                cout << "Atirador atendido com sucesso!" << endl;
            }
            else
            {
                cout << "Nenhum atirador na fila de espera!" << endl;
            }
            break;
        }
        case 8:
        {
            // Exibe/busca um atirador na lista de atendidos
            int vida;
            cout << "Digite a quantidade de vida do atirador: ";
            cin >> vida;
            bool resultado = jogo.exibirAtiradorAtendido(vida);
            if (!resultado)
            {
                cout << "Atirador não encontrado!" << endl;
            }
            break;
        }
        case 9:
        {
            // Exibe todos os atiradores já atendidos
            bool resultado = jogo.exibirRelatorio();
            if (!resultado)
            {
                cout << "Não há atiradores no relatório" << endl;
            }
            break;
        }
        case 0:
        {
            // Fecha o jogo
            cout << "Saindo do jogo..." << endl;
            break;
        }
        default:
        {
            // Opção inválida
            cout << "Opção inválida. Tente novamente." << endl;
            break;
        }
        }

        cout << endl;

    } while (escolha != 0);

    return 0;
}