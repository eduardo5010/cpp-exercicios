// Aluno: Eduardo Santos Ferreira

// Este arquivo utiliza a seguinte codificação: UTF-8

// Faça um programa, utilizando os comandos de C++, que leia dois números e calcule o resto da divisão do primeiro pelo segundo. Escreva o resultado.

// Importando bibliotecas
#include <iostream>

using namespace std;

// Função principal
int main () {
    // Declarando variáveis
    int n1, n2;

    // Solicitando dados do usuário
    cin >> n1;
    cin >> n2;

    // Retornando resultados
    cout << n1 % n2;
    return 0;
}