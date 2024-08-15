// Aluno: Eduardo Santos Ferreira

// Este arquivo utiliza a seguinte codificação: UTF-8

/* Dado um polígono convexo de n lados, podemos calcular o número de diagonais diferentes nd desse polígono, pela fórmula:

nd=n(n−3)/2

Escreva um programa que leia quantos lados tem o polígono e, posteriormente, calcule e mostre a quantidade de diagonais diferentes que o polígono possui. */

// Importando bibliotecas
#include <iostream>
#include <iomanip>

using namespace std;

//Função principal
int main () {
    // Declarando variáveis
    float nd;
    int n;

    // Solicitando dados do usuário
    cin >> n;

    // Efetuando operações solicitadas
    nd = (n * (n-3)) / 2;

    // Retornando resultados
    cout << setiosflags (ios::fixed) << setprecision (1) << nd;
    return 0;
}