// Aluno: Eduardo Santos Ferreira

// Este arquivo utiliza a seguinte codificação: UTF-8

/* Crie um vetor representando os alunos de um determinado curso. Esse vetor deve conter uma estrutura 
que armazene a nome do aluno, nota da primeira prova, nota da segunda prova, nota da terceira prova e a média.

(a) Permita ao usuário entrar com os dados de 5 alunos (nome e as 3 notas da prova).

(b) Calcule a média de cada aluno e armazene no campo da média respectivamente.

(c) Encontre o aluno com maior média */

// Importando bibliotecas
#include <iostream>
#include <string>

using namespace std;

// Definindo constante
#define NUM_ALUNOS 5

// Criando estrutura
struct Aluno {
    string nome;
    float prova1;
    float prova2;
    float prova3;
    float media;
};

// Função principal
int main() {

    setlocale(LC_ALL,"portuguese");

    // Declarando variável
    Aluno alunos[NUM_ALUNOS];

    // Solicitando dados ao usuário
    for (int i = 0; i < NUM_ALUNOS; i++) {
        cout << "Qual o nome do aluno? ";
        cin >> alunos[i].nome;
        cout << "Qual a nota da primeira prova? ";
        cin >> alunos[i].prova1;
        cout << "Qual a nota da segunda prova? ";
        cin >> alunos[i].prova2;
        cout << "Qual a nota da terceira prova? ";
        cin >> alunos[i].prova3;
        alunos[i].media = (alunos[i].prova1 + alunos[i].prova2 + alunos[i].prova3) / 3;
    }

    // Realizando as operações solicitadas
    int idx_maior_media = 0;
    for (int i = 1; i < NUM_ALUNOS; i++) {
        if (alunos[i].media > alunos[idx_maior_media].media) {
            idx_maior_media = i;
        }
    }

    // Retornando resultados
    cout << "O aluno com a maior nota e " << alunos[idx_maior_media].nome << " que obteve a media " << alunos[idx_maior_media].media << endl;
    return 0;
}