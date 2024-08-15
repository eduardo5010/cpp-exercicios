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

// Arquivo de implementação da classe Aluguel_Veiculo

// Declarando bibliotecas
#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include "LVP09.h"

using namespace std;

// Implementando métodos do objeto do tipo Lutador

string Lutador::getNome()
{
    return this->nome;
}

int Lutador::getFicha()
{
    return this->ficha;
}

long long int Lutador::getCPF()
{
    return this->cpf;
}

string Lutador::getMotivoAtendimento()
{
    return this->motivoAtendimento;
}

void Lutador::setNome(string nome)
{
    this->nome = nome;
}

void Lutador::setFicha(int ficha)
{
    this->ficha = ficha;
}

void Lutador::setCPF(long long int cpf)
{
    this->cpf = cpf;
}

void Lutador::setMotivoAtendimento(string motivoAtendimento)
{
    this->motivoAtendimento = motivoAtendimento;
}

// Implementando métodos do objeto do tipo Jogo

bool Jogo::adicionarLutadorFila(Lutador lutador)
{
    fila.push(Lutador);
    return true;
}

bool Jogo::atenderLutador()
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

bool Jogo::exibirLutadorAtendido(int ficha)
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

bool Jogo::exibirRelatorio()
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

// Implementando métodos do objeto do tipo Atirador

string Atirador::getNome()
{
    return this->nome;
}

int Atirador::getFicha()
{
    return this->ficha;
}

long long int Atirador::getCPF()
{
    return this->cpf;
}

string Atirador::getMotivoAtendimento()
{
    return this->motivoAtendimento;
}

void Atirador::setNome(string nome)
{
    this->nome = nome;
}

void Atirador::setFicha(int ficha)
{
    this->ficha = ficha;
}

void Atirador::setCPF(long long int cpf)
{
    this->cpf = cpf;
}

void Atirador::setMotivoAtendimento(string motivoAtendimento)
{
    this->motivoAtendimento = motivoAtendimento;
}

// Implementando métodos do objeto do tipo Jogo

bool Jogo::adicionarAtiradorFila(Atirador atirador)
{
    fila.push(Atirador);
    return true;
}

bool Jogo::atenderAtirador()
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

bool Jogo::exibirAtiradorAtendido(int ficha)
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

bool Jogo::exibirRelatorio()
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