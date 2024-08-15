/*
> Discente: Eduardo Santos Ferreira
> Matrícula: 121210323
> Período: 2022.2
> Curso: Engenharia Elétrica
> Disciplina: Tecnícas de Programação
> Turma: 01
> Professor: MARCUS SALERNO
> Unidade 7: LVP-08
Descrição do LVP:
*/

// Este arquivo utiliza a seguinte codificação: UTF-8

/*
Faça um programa em C++ que permita o cadastro de um funcionário e calcule o seu salário líquido, com base em uma tabela de imposto de renda.

O programa deve ter uma classe Pessoa (com os atributos "nome" e "idade"), e outra classe Funcionário derivada da classe Pessoa (com os atributos "cargo", "salario_bruto", "salario_liquido" e " imposto").

O salário líquido deve ser realizado por um método da classe Funcionário, e deverá ser calculado a partir do salário bruto informado, utilizando as alíquotas da tabela do imposto de renda.

Ao final, o programa deve exibir os dados informados e o salário líquido calculado.
*/

// Declarando bibliotecas
#include <iostream>
#include <string>
#include <iomanip>
#include "LVP08.cpp"

using namespace std;

// Função principal
int main () 
{

    setlocale(LC_ALL, "Portuguese");

    // Declarando variáveis
    string nome, cargo;
    int idade;
    float salario;

    // Instanciando objeto do tipo Funcionário
    Funcionario f;

    // Solicitando informações
    cout << "Entrada:" << endl;
    cout << "Nome: " << endl;
    cin.ignore();
    getline(cin, nome);
    f.setNome(nome);
    cout << "Idade: " << endl;
    cin >> idade;
    f.setIdade(idade);
    cout << "Cargo: " << endl;
    cin.ignore();
    getline(cin, cargo);
    f.setCargo(cargo);
    cout << "Salário: " << endl;
    cin >> salario;
    f.setSalario(salario);

    // Realizando operações
    f.salarioLiquido(salario);

    // Retornando resultados
    cout << "Funcionário: " << f.getNome() << endl;
    cout << "Idade: " << f.getIdade() << endl;
    cout << "Cargo: " << f.getCargo() << endl;
    cout << "Salário Bruto: R$" << setiosflags(ios::fixed) << setprecision(2)  << f.getSalario() << endl;
    cout << "Aliquota do Imposto: " << f.getImposto() << endl;
    cout << "Salário Líquido: R$" << setiosflags(ios::fixed) << setprecision(2) << f.getSalarioLiquido();

    // Fechando o programa
    return 0;
}