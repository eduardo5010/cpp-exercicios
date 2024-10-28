// Aluno: Eduardo Santos Ferreira

// Este arquivo utiliza a seguinte codificação: UTF-8

/* Faça um programa que leia um número inteiro positivo e o mostre com os seus dígitos invertidos. 
Para isso, o programa usa uma função inverte_digitos(), que recebe um inteiro positivo e retorna 
outro inteiro positivo formado pelos dígitos do inteiro recebido porém, na ordem inversa. */

// Importando bibliotecas
#include <iostream>

using namespace std;

// Função para inverter dígitos
void inverte_digitos (int n) {
    while (n > 0) {
        int digito = n%10;
        n /= 10;
        // Retornando resultados
        cout << digito;
    }
}

// Função principal
int main () {

    setlocale(LC_ALL,"portuguese");

    // Declarando variáveis
    int n, invertido;

    // Solicitando dados do usuário e chamando a função
    cout << "Informe o número a ser invertido: " << endl;
    cin >> n;
    cout << "Número invertido: ";
    if (n == 0) {
        cout << 0;
    }
    inverte_digitos(n);

    return 0;
}