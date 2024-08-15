// Aluno: Eduardo Santos Ferreira

// Este arquivo utiliza a seguinte codificação: UTF-8

// Arquivo cabeçalho das classes Cliente e Banco

// Declarando bibliotecas
#ifndef LVP06_H
#define LVP06_H
#include <string>

using namespace std;

// Definindo protótipos do objeto do tipo Cliente
class Cliente
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
class Banco
{
private:
    queue<Cliente> fila;
    vector<Cliente> atendidos;

public:
    bool adicionarClienteFila(Cliente);
    bool atenderCliente();
    bool exibirClienteAtendido(int);
    bool exibirRelatorio();
};

#endif