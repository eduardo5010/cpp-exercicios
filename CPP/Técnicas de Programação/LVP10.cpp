/*
> Discente: Eduardo Santos Ferreira
> Matrícula: 121210323
> Período: 2022.2
> Curso: Engenharia Elétrica
> Disciplina: Tecnícas de Programação
> Turma: 01
> Professor: MARCUS SALERNO
> Unidade 7: LVP-10
*/

// Este arquivo utiliza a seguinte codificação: UTF-8

// Declarando bibliotecas
#include "LVP10.h"

Pessoa::Pessoa(string nome, string endereco, int telefone, long long int cpf)
{
    setTitulo(tituloPessoa);
    setAutor(nomeAutor);
    setNumReg(valorNumreg);
    setPreco(valorPreco);
}

void Pessoa::setTitulo(string tituloPessoa)
{
    // copia no m�ximo 30 caracteres da string para titulo
    const char *valorTitulo = tituloPessoa.data();
    int length = tituloPessoa.size();
    length = (length < 30 ? length : 29);
    strncpy(titulo, valorTitulo, length);
    titulo[length] = '\0'; // acrescenta caractere nulo ao titulo
}
void Pessoa::setAutor(string nomeAutor)
{
    // copia no m�ximo 30 caracteres da string para autor
    const char *valorAutor = nomeAutor.data();
    int length = nomeAutor.size();
    length = (length < 30 ? length : 29);
    strncpy(autor, valorAutor, length);
    autor[length] = '\0'; // acrescenta caractere nulo a autor
}
void Pessoa::setNumReg(int valorNumreg)
{
    this->numreg = valorNumreg;
}
void Pessoa::setPreco(float valorPreco)
{
    this->preco = valorPreco;
}

void Pessoa::novonome()
{
    cout << "\nDigite Titulo : ";
    fflush(stdin); // limpa o buffer de entrada
    cin.getline(titulo, 30);
    cout << "\nDigite Autor : ";
    fflush(stdin); // limpa o buffer de entrada
    cin.getline(autor, 30);
    cout << "\nDigite o Numero do Registro : ";
    cin >> numreg;
    cout << "\nDigite o Preco : ";
    cin >> preco;
}

void Pessoa::imprime()
{
    cout << endl;
    cout << "Titulo : " << titulo << endl;
    cout << "Autor : " << autor << endl;
    cout << "Numero do Registro : " << numreg << endl;
    cout << "Preco : " << fixed << setprecision(2) << preco << endl;
}

void Agenda::gravarAgenda()
{
    ofstream agendaGravar;
    agendaGravar.open("objetosPessoas.txt", ios::binary);
    //	ofstream agenda("credito.dat", ios::binary);

    vector<Pessoa> pessoas;
    Pessoa peaux;
    do
    {
        peaux.novonome();         // lê do teclado os dados da pessoa
        pessoas.push_back(peaux); // insere Pessoa na lista
        cout << endl
             << "Inserir outra pessoa (s/n) " << endl;
    } while (getch() == 's');

    if (!agenda)
    {
        cout << "Não foi possível abrir a agenda" << endl;
        return (-1);
    }
    for (unsigned i = 0; i < li.size(); i++)
    {
        agenda.write(reinterpret_cast<const char *>(&li[i]), sizeof(Pessoa)); // grava no agenda
    }

    agenda.close(); // fecha agenda
}

void Agenda::lerAgenda()
{
    fstream agendaLer;
    agendaLer.open("objetosPessoas.txt", ios::in); // abre agenda para leitura
                                                   //	ifstream agenda("credito.txt",ios::in);
    if (!agenda)
    {
        cout << "N�o foi poss�vel abrir o agenda" << endl;
        return (-1);
    }

    vector<Pessoa> li;
    Pessoa liaux;
    agenda.read(reinterpret_cast<char *>(&liaux), sizeof(Pessoa)); // l� do agenda

    while (agenda && !agenda.eof())
    { // enquanto n�o for fim de agenda...
        li.push_back(liaux);
        agenda.read(reinterpret_cast<char *>(&liaux), sizeof(Pessoa)); // l� do agenda
    }

    // escreve os elementos da lista de Pessoas
    cout << endl
         << "Dados dos Pessoas" << endl;
    for (unsigned i = 0; i < li.size(); i++)
    {
        li[i].imprime();
        cout << endl;
    }

    agenda.close();
}