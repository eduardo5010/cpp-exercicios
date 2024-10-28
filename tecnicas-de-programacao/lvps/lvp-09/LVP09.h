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

// Arquivo cabeçalho das classes Cliente e Banco

// Declarando bibliotecas
#ifndef LVP09_H
#define LVP09_H
#include <string>

using namespace std;

// Definindo protótipos do objeto do tipo Cliente
class Lutador
{
private:
    string nome;
    int ficha;
    long long int cpf;
    string motivoAtendimento;

public:
    string getNome();
    int getFicha();
    long long int getCPF();
    string getMotivoAtendimento();
    void setNome(string);
    void setFicha(int);
    void setCPF(long long int);
    void setMotivoAtendimento(string);
};

class Atirador
{
private:
    string nome;
    int ficha;
    long long int cpf;
    string motivoAtendimento;

public:
    string getNome();
    int getFicha();
    long long int getCPF();
    string getMotivoAtendimento();
    void setNome(string);
    void setFicha(int);
    void setCPF(long long int);
    void setMotivoAtendimento(string);
};

// Definindo protótipos do objeto do tipo Banco
class Jogo
{
private:
    queue<Lutador> fila;
    vector<Lutador> atendidos;
    queue<Atirador> fila;
    vector<Atirador> atendidos;
public:
    bool adicionarClienteFila(Cliente);
    bool atenderCliente();
    bool exibirClienteAtendido(int);
    bool exibirRelatorio();
};

#endif