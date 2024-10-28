#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void criarArquivo(const string &nomeArquivo)
{
    ofstream arquivo(nomeArquivo);
    if (arquivo.is_open())
    {
        arquivo << "Hello, World!" << endl;
        arquivo.close();
        cout << "Arquivo criado com sucesso." << endl;
    }
    else
    {
        cout << "Erro ao criar o arquivo." << endl;
    }
}

void lerArquivo(const string &nomeArquivo)
{
    ifstream arquivo(nomeArquivo);
    if (arquivo.is_open())
    {
        string linha;
        while (getline(arquivo, linha))
        {
            cout << linha << endl;
        }
        arquivo.close();
    }
    else
    {
        cout << "Erro ao ler o arquivo." << endl;
    }
}

int main()
{
    string nomeArquivo;
    char escolha;

    cout << "Digite o nome do arquivo: ";
    cin >> nomeArquivo;

    cout << "Deseja criar o arquivo? (S/N): ";
    cin >> escolha;

    if (escolha == 'S' || escolha == 's')
    {
        criarArquivo(nomeArquivo);
    }

    cout << "Deseja ler o arquivo? (S/N): ";
    cin >> escolha;

    if (escolha == 'S' || escolha == 's')
    {
        lerArquivo(nomeArquivo);
    }

    return 0;
}