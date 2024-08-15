// Aluno: Eduardo Santos Ferreira

// Este arquivo utiliza a seguinte codificação: UTF-8

// Escreva um programa para encontrar o menor e o maior número de um array de N posições inteiras. N sempre menor ou igual a 20.

// Importando bibliotecas
#include <iostream>

using namespace std;

// Função principal
int main () {
    // Declarando variáveis
    int n[20], maior, menor;

    // Efetuando operações solicitadas
    for (int i = 0; i < 20; i++) {
        cout << "Digite o " << i + 1 << "número do array: " << endl;
        cin >> n[i];
        cout << "O númro difitado foi " << n[i] << endl;
    }
    for (int i = 0; i < 20; i++) {
        if (n[i] > n[i--]) {
            maior = n[i];
            cout << maior;
        } else {
            menor = n[i];
            cout << menor;
        }
    }

    // Retornando resultados
    cout << "Menor número: " + menor << endl << "Maior número: " + maior;
    return 0;
}