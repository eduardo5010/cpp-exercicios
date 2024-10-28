// Aluno: Eduardo Santos Ferreira

// Este arquivo utiliza a seguinte codificação: UTF-8

/* Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme solicitado abaixo:

• Horário: composto de hora, minutos e segundos.

• Data: composto de dia, mês e ano.

• Compromisso: composto de uma data, horário e texto que descreve o compromisso.

Leia os valores para horário e a data e armazene no compromisso, incluindo o texto do compromisso. Em seguida escreva os valores armazenados no Compromisso. */

// Importando bibliotecas
#include <iostream>
#include <string>

using namespace std;

// Criando estruturas
struct Horario {
    string hora;
    string minutos;
    string segundos;
};

struct Data {
    string dia;
    string mes;
    int ano;
};

struct Compromisso {
    Horario horario;
    Data data;
    string descricao;
};

//Função principal
int main() {

    setlocale(LC_ALL,"portuguese");

    // Declarando variável
    Compromisso compromisso;

    // Solicitando dados ao usuário
    cout << "Insira o valor da hora: ";
    cin >> compromisso.horario.hora;
    cout << "Insira o valor do minuto: ";
    cin >> compromisso.horario.minutos;
    cout << "Insira o valor do segundo: ";
    cin >> compromisso.horario.segundos;
    cout << "Qual o dia? ";
    cin >> compromisso.data.dia;
    cout << "Qual o mes? ";
    cin >> compromisso.data.mes;
    cout << "Qual o ano? ";
    cin >> compromisso.data.ano;
    cin.ignore();
    cout << "Qual o compromisso? ";
    getline(cin, compromisso.descricao);

    // Realizando ajustes nos dados recebidos se necessário
    if (compromisso.horario.hora.length() < 2) {
        compromisso.horario.hora = "0" + compromisso.horario.hora;
    }
    if (compromisso.horario.minutos.length() < 2) {
        compromisso.horario.minutos = "0" + compromisso.horario.minutos;
    }
    if (compromisso.horario.segundos.length() < 2) {
        compromisso.horario.segundos = "0" + compromisso.horario.segundos;
    }
    if (compromisso.data.dia.length() < 2) {
        compromisso.data.dia = "0" + compromisso.data.dia;
    }
    if (compromisso.data.mes.length() < 2) {
        compromisso.data.mes = "0" + compromisso.data.mes;
    }

    // Retornando resultados
    cout << "O seu compromisso e:" << endl;
    cout << "Horario: " << compromisso.horario.hora << ":" << compromisso.horario.minutos << ":" << compromisso.horario.segundos << endl;
    cout << "Data: " << compromisso.data.dia << "/" << compromisso.data.mes << "/" << compromisso.data.ano << endl;
    cout << "Compromisso: " << compromisso.descricao << endl;
    return 0;
}