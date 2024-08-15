// Aluno: Eduardo Santos Ferreira

// Este arquivo utiliza a seguinte codificação: UTF-8

/* Faça um programa que leia dois números e um texto (string) contendo o símbolo de um operador aritmético (“+”, “-”, “*” ou “/”), referente a adição, subtração, 
multiplicação ou divisão, respectivamente, e mostre o resultado da operação correspondente aplicada aos valores lidos. As operações só serão realizadas com 
um operador válido e a divisão só será realizada se o quociente for diferente de zero. */

// Importando bibliotecas
#include <iostream>
#include <iomanip>

using namespace std;

// Função principal
int main () {

    setlocale(LC_ALL,"portuguese");

    // Declarando variáveis
    float n1, n2, r;
    string a;

    // Solicitando dados do usuário
    cout << "Informe o primeiro operando: " << endl;
    cin >> n1;
    cout << "Informe o segundo operando: " << endl;
    cin >> n2;
    cout << "Informe o operador (+, -, * ou /): " << endl;
    cin >> a;

    // Efetuando operações solicitadas e retornando resultados
    if (a == "+") {
        r = n1 + n2;
        cout << "Resultado da adição = " << setiosflags (ios::fixed) << setprecision (1) << r << "." << endl;
    } else if (a == "-") {
        r = n1 - n2;
        cout << "Resultado da subtração = " << setiosflags (ios::fixed) << setprecision (1) << r << "." << endl;
    } else if (a == "*") {
        r = n1 * n2;
        cout << "Resultado da multiplicação = " << setiosflags (ios::fixed) << setprecision (1) << r << "." << endl;
    } else if (a == "/" && n2 != 0) {
        r = n1 / n2;
        cout << "Resultado da divisão = " << setiosflags (ios::fixed) << setprecision (1) << r << "." << endl;
    } else if (a == "/" && n2 == 0) {
        cout << "Divisão por zero inválida!" << endl; 
    } else {
        cout << "Operador inválido!" << endl;
    }
    return 0;
}