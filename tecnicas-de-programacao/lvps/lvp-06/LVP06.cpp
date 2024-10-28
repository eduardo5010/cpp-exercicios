// Aluno: Eduardo Santos Ferreira

// Este arquivo utiliza a seguinte codificação: UTF-8

// Arquivo de implementação da classe Aluguel_Veiculo

// Declarando bibliotecas
#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include "LVP06.h"

using namespace std;

// Implementando métodos do objeto do tipo Cliente

string Cliente::getNome()
{
    return this->nome;
}

int Cliente::getFicha()
{
    return this->ficha;
}

long long int Cliente::getCPF()
{
    return this->cpf;
}

string Cliente::getMotivoAtendimento()
{
    return this->motivoAtendimento;
}

void Cliente::setNome(string nome)
{
    this->nome = nome;
}

void Cliente::setFicha(int ficha)
{
    this->ficha = ficha;
}

void Cliente::setCPF(long long int cpf)
{
    this->cpf = cpf;
}

void Cliente::setMotivoAtendimento(string motivoAtendimento)
{
    this->motivoAtendimento = motivoAtendimento;
}

// Implementando métodos do objeto do tipo Banco

bool Banco::adicionarClienteFila(Cliente cliente)
{
    fila.push(cliente);
    return true;
}

bool Banco::atenderCliente()
{
    if (!fila.empty())
    {
        atendidos.push_back(fila.front());
        fila.pop();
        return true;
    }
    else
    {
        return false;
    }
}

bool Banco::exibirClienteAtendido(int ficha)
{
    bool encontrado = false;
    for (int i = 0; i < atendidos.size(); i++)
    {
        if (atendidos[i].getFicha() == ficha)
        {
            cout << "Nome: " << atendidos[i].getNome() << endl;
            cout << "Ficha: " << atendidos[i].getFicha() << endl;
            cout << "CPF: " << atendidos[i].getCPF() << endl;
            cout << "Motivo: " << atendidos[i].getMotivoAtendimento() << endl;
            encontrado = true;
            break;
        }
    }
    if (encontrado == false)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool Banco::exibirRelatorio()
{
    if (atendidos.empty())
    {
        return false;
    }
    else
    {
        for (int i = 0; i < atendidos.size(); i++)
        {
            cout << "Nome: " << atendidos[i].getNome() << endl;
            cout << "Ficha: " << atendidos[i].getFicha() << endl;
            cout << "CPF: " << atendidos[i].getCPF() << endl;
            cout << "Motivo: " << atendidos[i].getMotivoAtendimento() << endl;
            cout << endl;
        }
        return true;
    }
}