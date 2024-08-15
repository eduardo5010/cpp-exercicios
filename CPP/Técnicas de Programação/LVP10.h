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
#ifndef LVP10_H
#define LVP10_H

using namespace std;

class Pessoa
{
private:
    string nome;
    string endereco;
    int telefone;
    long long int cpf;

public:
    Pessoa(string = "", string = "", int = 0, double = 0.0);
    void alteraPessoa();
    void setNome(string);
    void setEndereco(string);
    void setTelefone(int);
    void setCPF(long long int);
    void novonome();
    void imprime();
};

class Agenda
{
private:
    vector<Pessoa> pessoas;
public:
    void gravarAgenda();
    void lerAgenda();
};

#endif