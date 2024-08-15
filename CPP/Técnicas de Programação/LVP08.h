/*
> Discente: Eduardo Santos Ferreira
> Matrícula: 121210323
> Período: 2022.2
> Curso: Engenharia Elétrica
> Disciplina: Tecnícas de Programação
> Turma: 01
> Professor: MARCUS SALERNO
> Unidade 7: LVP-08
*/

// Este arquivo utiliza a seguinte codificação: UTF-8

// Arquivo cabeçalho das classes Pessoa e Funcionario

#ifndef LVP08_H
#define LVP08_H

using namespace std;

class Pessoa
{
protected:
    string nome;
    int idade;
public:
    void setNome(string);
    string getNome();
    void setIdade(int);
    int getIdade();
};

class Funcionario:public Pessoa
{
private:
    string cargo, imposto;
    float salario_bruto, salario_liquido;
public:
    void setCargo(string);
    string getCargo();
    void setSalario(float);
    float getSalario();
    void salarioLiquido(float);
    string getImposto();
    float getSalarioLiquido();
};

#endif