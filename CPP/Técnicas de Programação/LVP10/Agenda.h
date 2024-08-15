#ifndef AGENDA_H
#define AGENDA_H

#include <iostream>
#include <fstream>
#include "Pessoa.h"

using namespace std;

class Agenda
{
private:
    struct Node
    {
        Pessoa pessoa;
        Node *next;
        Node(const Pessoa &p) : pessoa(p), next(nullptr) {}
    };

    int tamanho;
    Node *head;

public:
    Agenda() : head(nullptr) {}

    ~Agenda()
    {
        limpar();
    }

    int getTamanho()
    {
        return tamanho;
    }

    void setTamanho(int t)
    {
        tamanho = t;
    }

    void inserirPessoa(Pessoa p)
    {
        Node *newNode = new Node(p);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = newNode;
        }
        setTamanho(getTamanho() + 1);
    }

    void cadastrarPessoa()
    {
        Pessoa pessoa;
        cout << "Digite o nome: ";
        cin.ignore();
        getline(cin, pessoa.nome);
        cout << "Digite o endereço: ";
        getline(cin, pessoa.endereco);
        cout << "Digite o CPF: ";
        getline(cin, pessoa.cpf);
        cout << "Digite o telefone: ";
        getline(cin, pessoa.telefone);

        inserirPessoa(pessoa);
    }

    void gravarComoTexto()
    {
        ofstream arquivo("agenda.txt");
        if (arquivo.is_open())
        {
            Node *current = head;
            while (current != nullptr)
            {
                arquivo << "Nome: " << current->pessoa.nome << endl;
                arquivo << "Endereço: " << current->pessoa.endereco << endl;
                arquivo << "CPF: " << current->pessoa.cpf << endl;
                arquivo << "Telefone: " << current->pessoa.telefone << endl;
                arquivo << endl;
                current = current->next;
            }
            arquivo.close();
            cout << "Agenda gravada em formato de texto." << endl;
        }
        else
        {
            cout << "Erro ao abrir o arquivo." << endl;
        }
    }

    void lerComoTexto()
    {
        ifstream arquivo("agenda.txt");
        if (arquivo.is_open())
        {
            limpar();
            string linha;
            Pessoa pessoa;
            while (getline(arquivo, linha))
            {
                if (linha.substr(0, 6) == "Nome: ")
                {
                    pessoa.nome = linha.substr(6);
                    getline(arquivo, linha);
                    pessoa.endereco = linha.substr(10);
                    getline(arquivo, linha);
                    pessoa.cpf = linha.substr(5);
                    getline(arquivo, linha);
                    pessoa.telefone = linha.substr(10);

                    inserirPessoa(pessoa);
                }
            }
            arquivo.close();
            cout << "Agenda lida em formato de texto." << endl;
        }
        else
        {
            cout << "Erro ao abrir o arquivo." << endl;
        }
    }

    void gravarComoObjeto()
    {
        ofstream arquivo("agenda.dat", ios::binary);
        if (arquivo.is_open())
        {
            arquivo.write(reinterpret_cast<const char *>(&tamanho), sizeof(tamanho));
            Node *current = head;
            while (current != nullptr)
            {
                int nomeTamanho = current->pessoa.nome.size();
                arquivo.write(reinterpret_cast<const char *>(&nomeTamanho), sizeof(nomeTamanho));
                arquivo.write(current->pessoa.nome.c_str(), nomeTamanho);

                int enderecoTamanho = current->pessoa.endereco.size();
                arquivo.write(reinterpret_cast<const char *>(&enderecoTamanho), sizeof(enderecoTamanho));
                arquivo.write(current->pessoa.endereco.c_str(), enderecoTamanho);

                int cpfTamanho = current->pessoa.cpf.size();
                arquivo.write(reinterpret_cast<const char *>(&cpfTamanho), sizeof(cpfTamanho));
                arquivo.write(current->pessoa.cpf.c_str(), cpfTamanho);

                int telefoneTamanho = current->pessoa.telefone.size();
                arquivo.write(reinterpret_cast<const char *>(&telefoneTamanho), sizeof(telefoneTamanho));
                arquivo.write(current->pessoa.telefone.c_str(), telefoneTamanho);

                current = current->next;
            }
            arquivo.close();
            cout << "Agenda gravada em formato de objeto." << endl;
        }
        else
        {
            cout << "Erro ao abrir o arquivo." << endl;
        }
    }

    void lerComoObjeto()
    {
        ifstream arquivo("agenda.dat", ios::binary);
        if (arquivo.is_open())
        {
            limpar();
            int len;
            arquivo.read(reinterpret_cast<char *>(&len), sizeof(len));
            for (int i = 0; i < len; i++)
            {
                int nomeTamanho;
                arquivo.read(reinterpret_cast<char *>(&nomeTamanho), sizeof(nomeTamanho));
                string nome;
                nome.resize(nomeTamanho);
                arquivo.read(&nome[0], nomeTamanho);

                int enderecoTamanho;
                arquivo.read(reinterpret_cast<char *>(&enderecoTamanho), sizeof(enderecoTamanho));
                string endereco;
                endereco.resize(enderecoTamanho);
                arquivo.read(&endereco[0], enderecoTamanho);

                int cpfTamanho;
                arquivo.read(reinterpret_cast<char *>(&cpfTamanho), sizeof(cpfTamanho));
                string cpf;
                cpf.resize(cpfTamanho);
                arquivo.read(&cpf[0], cpfTamanho);

                int telefoneTamanho;
                arquivo.read(reinterpret_cast<char *>(&telefoneTamanho), sizeof(telefoneTamanho));
                string telefone;
                telefone.resize(telefoneTamanho);
                arquivo.read(&telefone[0], telefoneTamanho);

                Pessoa pessoa;
                pessoa.nome = nome;
                pessoa.endereco = endereco;
                pessoa.cpf = cpf;
                pessoa.telefone = telefone;

                inserirPessoa(pessoa);
            }
            arquivo.close();
            cout << "Agenda lida em formato de objeto." << endl;
        }
        else
        {
            cout << "Erro ao abrir o arquivo." << endl;
        }
    }

    void listarPessoas()
    {
        if (head != nullptr)
        {
            Node *current = head;
            cout << "Lista com " << tamanho << " pessoas" << endl;
            while (current != nullptr)
            {
                cout << "Nome: " << current->pessoa.nome << endl;
                cout << "Endereço: " << current->pessoa.endereco << endl;
                cout << "CPF: " << current->pessoa.cpf << endl;
                cout << "Telefone: " << current->pessoa.telefone << endl;
                cout << endl;
                current = current->next;
            }
        }
        else
            cout << "Lista vazia!" << endl;
    }

    void limpar()
    {
        setTamanho(0);
        Node *current = head;
        while (current != nullptr)
        {
            Node *temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
    }
};

#endif