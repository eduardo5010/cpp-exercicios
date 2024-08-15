// Aluno: Eduardo Santos Ferreira

// Este arquivo utiliza a seguinte codificação: UTF-8

/* Faça um programa que leia as notas de vários alunos, mostre a média destas notas e mostre as notas que estão abaixo da média. 
O leitura das notas para quando for lido um valor negativo. Utilize um vetor para armazenar as notas. */

// Importando bibliotecas
#include <iostream>
#include <iomanip>

using namespace std;

// Função principal
int main () {

    setlocale(LC_ALL,"portuguese");

    // Declarando variáveis
    int tamanho = 0;
    float notas[tamanho], n = 1, media, somatorio = 0;

    // Solicitando dados do usuário e realizando operações solicitadas
    cout << "Informe as notas dos alunos (valor negativo para parar): " << endl;
    while (n >= 0) {
        cin >> n;
        if (n >= 0) {
            notas[tamanho] = n;
            tamanho++;
            somatorio += n;
        }
    }
    media = somatorio / tamanho;

    // Retornando resultados
    cout << "Somatório das notas = " << somatorio << endl;
    cout << "Quantidade de notas = " << tamanho << endl;
    cout << "Média = " << setiosflags (ios::fixed) << setprecision (1) << media << endl;
    cout << "Notas abaixo da média: " << endl;
    for (int i = 0; i < tamanho; i++) {
        if (notas[i] < 7) {
            cout << setiosflags (ios::fixed) << setprecision (1) << notas[i] << endl;
        }
    }
    return 0;
}