/*
> Discente: Eduardo Santos Ferreira
> Matrícula: 121210323
> Período: 2022.2
> Curso: Engenharia Elétrica
> Disciplina: Tecnícas de Programação
> Turma: 01
> Professor: MARCUS SALERNO
> Unidade 6: LVP-07
Descrição do LVP:
*/

// Este arquivo utiliza a seguinte codificação: UTF-8

/*
LEIA ATENTAMENTE TODO O ENUNCIADO

Crie uma classe em C++ chamada ContaDePoupanca. Use um membro de dados static taxaDeJurosAnual para armazenar a taxa de juros anual. Essa classe contém também um membro
de dados private saldoDaPoupanca indicando a quantia que o poupador atualmente tem em depósito. Forneça um método membro calculeRendimentoMensal que calcule o rendimento
mensal multiplicando o saldo atual pela taxaDeJurosAnual dividida por 12; este rendimento deve ser somado ao saldoDaPoupanca. Forneça uma função membro static
modifiqueTaxaDeJuros que inicializa a variável static taxaDeJurosAnual com um novo valor.

Escreva um programa de teste que instancia vários objetos diferentes contaDePoupanca e inicialize a taxa de juros anual. Em seguida, escreva os rendimentos de cada
poupador após um mês

Entradas
Devem ser informados os saldos de cada poupador e a taxa de juros anual.

Saídas
Devem ser mostrados os rendimentos de cada poupador após um mês.

Exemplos:
>>

Insira o valor a ser depositado do poupador 1 :

2000.00

Insira o valor a ser depositado do poupador 2:

3000.00

Informe a taxa de juros (%):

6

<<
O rendimento do poupador 1 é: R$ 2010,00

O rendimento do poupador 2 é: R$ 3015,00
*/

// Importando bibliotecas

#include <iostream>
#include <iomanip>
#include <vector>
#include "LVP07.cpp"

using namespace std;

// Função principal
int main()
{

    setlocale(LC_ALL, "Portuguese");

    // Declarando variável
    double valor;
    static double taxa;
    int contador = 1;
    ContaDePoupanca poupanca;

    do
    {
        // Instanciando objeto do tipo ContaDePoupanca
        ContaDePoupanca poupador;
        cout << "Insira o valor a ser depositado do poupador " << contador << " (digite 0 para parar): " << endl;
        cin >> valor;
        poupador.setSaldoDaPoupanca(valor);
        poupanca.addPoupador(poupador);
        contador++;
    } while (valor != 0);

    cout << "Informe a taxa de juros (%): ";
    cin >> taxa;
    poupanca.modifiqueTaxaDeJuros(taxa);

    poupanca.calculeRendimentoMensal();
    poupanca.imprimirSaldosContas();

    return 0;
}