/*
> Discente: Eduardo Santos Ferreira
> Matrícula: 121210323
> Período: 2022.2
> Curso: Engenharia Elétrica
> Disciplina: Tecnícas de Programação
> Turma: 01
> Professor: MARCUS SALERNO
> Untelefone 7: LVP-10
Descrição do LVP:
*/

// Este agenda utiliza a seguinte codificação: UTF-8

/*
Crie uma classe Agenda que irá armazenar uma lista de Pessoas. Cada pessoa, representada também por uma Classe, deverá ter como atributos o nome, endereço, cpf e telefone.

A classe Agenda, além do(s) método(s) para ler os dados de uma pessoa, deverá ter um método para gravar e outro para ler, em um agenda txt, todas as pessoas armazenadas
na lista.

Como este LVP 10 é para vocês aprenderem sobre manipulação de agendas, a classe Agenda também terá métodos para ler e gravar em um agenda utilizando a manipulação
de objetos diretamente no agenda.

Na main, haverá um menu em que o usuário deverá escolher se quer gravar como texto ou como objeto.

Considerações:

Com relação a manipulação de agenda, a leitura dos objetos armazenados nos dois agendas deve ser feita pelo construtor da Agenda, ou seja,
ele deve ler os atributos do agenda e armazenar em um objeto (ou ler o objeto diretamente do agenda) e depois cadastrar esse objeto na lista.
Já a escrita dos objetos nos dois agendas deve ser feita em um método de salvamento. Lembre-se de que esse método deve ser chamado
pelo destrutor para garantir que as listas realmente serão salvas. Para isso, vocês devem utilizar objetos de leitura do tipo ifstream e de
escrita do tipo ofstream, ambos da biblioteca de manipulação de agendas <ofstream>.
*/

// Declarando bibliotecas
#include <iostream>
#include <fstream> // para fun��es de agenda: ofstream e ifstream
#include <conio.h> // para getch()
#include <cstring> // para strncpy()
#include <string>
#include <iomanip> //para o setprecision
#include <vector>
#include "LVP10.cpp"

using namespace std;

// Função principal
int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Instanciando objeto do tipo agenda
    Agenda agenda;

    int escolha;

    do
    {
        // Menu principal
        cout << "--- AGENDA ---" << endl;
        cout << "1) ADICIONAR UMA NOVA PESSOA NA AGENDA" << endl;
        cout << "2) REMOVER UMA PESSOA DA AGENDA" << endl;
        cout << "3) EXIBIR/BUSCAR PESSOA NA AGENDA" << endl;
        cout << "4) EXIBIR TODOS AS PESSOAS NA AGENDA" << endl;
        cout << "9) FECHAR A AGENDA" << endl;
        cout << endl;
        cout << "Escolha uma opção: ";
        cin >> escolha;

        // Chamando métodos do objeto do tipo agenda
        switch (escolha)
        {
        case 1:
        {
            // Adiciona uma nova pessoa na agenda
            Pessoa pessoa;
            string nome;
            int telefone;
            long long int cpf;
            string endereco;
            cout << "Digite o nome: ";
            cin.ignore();
            getline(cin, nome);
            pessoa.setNome(nome);
            cout << "Digite o telefone: ";
            cin >> telefone;
            pessoa.setTelefone(telefone);
            cout << "Digite o número do CPF: ";
            cin.ignore();
            cin >> cpf;
            pessoa.setCPF(cpf);
            cout << "Digite o endereço: ";
            cin.ignore();
            getline(cin, endereco);
            pessoa.setendereco(endereco);
            bool resultado = agenda.adicionarPessoaAgenda(pessoa);
            if (resultado)
            {
                cout << "Pessoa cadastrada na agenda com sucesso!" << endl;
            }
            break;
        }
        case 2:
        {
            // Atende um pessoa
            bool resultado = agenda.removerPessoaAgenda();
            if (resultado)
            {
                cout << "Pessoa removida com sucesso!" << endl;
            }
            else
            {
                cout << "Nenhuma pessoa na agenda!" << endl;
            }
            break;
        }
        case 3:
        {
            // Exibe/busca um pessoa na agenda
            int cpf;
            cout << "Digite o número do CPF: ";
            cin >> cpf;
            bool resultado = agenda.exibirPessoaAgenda(cpf);
            if (!resultado)
            {
                cout << "Pessoa não encontrada!" << endl;
            }
            break;
        }
        case 4:
        {
            // Exibe todas as pessoas na agenda
            bool resultado = agenda.exibirAgenda();
            if (!resultado)
            {
                cout << "Não há pessoas na agenda" << endl;
            }
            break;
        }
        case 9:
        {
            // Fecha a agenda
            cout << "Fechando a agenda..." << endl;
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

    } while (escolha != 9);

    return 0;
}