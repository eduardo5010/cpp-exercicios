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

// Arquivo de implementação dos métodos das classes Pessoa e Funcionario

#include <iostream>
#include "LVP08.h"

using namespace std;

void Pessoa::setNome(string nome)
{
    this->nome = nome;
}

string Pessoa::getNome()
{
    return this->nome;
}

void Pessoa::setIdade(int idade)
{
    this->idade = idade;
}

int Pessoa::getIdade()
{
    return this->idade;
}

void Funcionario::setCargo(string cargo)
{
    this->cargo = cargo;
}

string Funcionario::getCargo()
{
    return this->cargo;
}

void Funcionario::setSalario(float salario)
{
    this->salario_bruto = salario;
}

float Funcionario::getSalario()
{
    return this->salario_bruto;
}

void Funcionario::salarioLiquido(float salario_bruto)
{
    if(salario_bruto >= 1903.99 && salario_bruto <= 2826.65)
    {
        this->salario_liquido = salario_bruto*.925;
        this->imposto = "7.5%";
    } else if (salario_bruto >= 2826.66 && salario_bruto <= 3751.05)
    {
        this->salario_liquido = salario_bruto*.85;
        this->imposto = "15%";
    } else if (salario_bruto >= 3751.06 && salario_bruto <= 4664.68)
    {
        this->salario_liquido = salario_bruto*.775;
        this->imposto = "22.5%";
    } else if (salario_bruto > 4664.68)
    {
        this->salario_liquido = salario_bruto*.725;
        this->imposto = "27.5%";
    }    
}

string Funcionario::getImposto()
{
    return this->imposto;
}

float Funcionario::getSalarioLiquido()
{
    return this->salario_liquido;
}