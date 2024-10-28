/*
> Discente: Eduardo Santos Ferreira
> Matrícula: 121210323
> Período: 2022.2
> Curso: Engenharia Elétrica
> Disciplina: Tecnícas de Programação
> Turma: 01
> Professor: MARCUS SALERNO
> Unidade 6: LVP-07
*/

// Este arquivo utiliza a seguinte codificação: UTF-8

// Arquivo cabeçalho da classe ContaDePoupanca

#ifndef LVP07_H
#define LVP07_H
#include <vector>

using namespace std;

class ContaDePoupanca
{
private:
    double saldoDaPoupanca;
    vector <ContaDePoupanca> poupadores;
    static double taxaDeJurosAnual; // Declaração da variável static
public:
    void calculeRendimentoMensal();
    double getSaldoDaPoupanca();
    void setSaldoDaPoupanca(double);
    void addPoupador(ContaDePoupanca);
    void imprimirSaldosContas();
    static void modifiqueTaxaDeJuros(double);
};

#endif