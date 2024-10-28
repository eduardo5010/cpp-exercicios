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

// Arquivo de implementação da classe ContaDePoupanca

#include <iomanip>
#include "LVP07.h"

using namespace std;

double ContaDePoupanca::taxaDeJurosAnual = 0; // Inicialização da variável static

void ContaDePoupanca::calculeRendimentoMensal()
{
    for (int i = 0; i < poupadores.size(); i++)
    {
        double rendimentoMensal = (poupadores[i].getSaldoDaPoupanca() * taxaDeJurosAnual) / (12 * 100);
        poupadores[i].setSaldoDaPoupanca(rendimentoMensal);
    }
}

double ContaDePoupanca::getSaldoDaPoupanca()
{
    return saldoDaPoupanca;
}

void ContaDePoupanca::setSaldoDaPoupanca(double valor)
{
    this->saldoDaPoupanca = valor;
}

void ContaDePoupanca::addPoupador(ContaDePoupanca poupador)
{
    poupadores.push_back(poupador);
}

void ContaDePoupanca::imprimirSaldosContas()
{
    for (int i = 0; i < poupadores.size(); i++)
    {
        cout << "O rendimento do poupador " << i++ << "é: R$ " << setiosflags(ios::fixed) << setprecision(2) << poupadores[i].getSaldoDaPoupanca() << endl;
        cout << endl;
    }
}

static void ContaDePoupanca::modifiqueTaxaDeJuros(double taxa)
{
    taxaDeJurosAnual = taxa;
}