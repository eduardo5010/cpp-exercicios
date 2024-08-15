/*Segue abaixo um exemplo de código em C++ que recebe dois horários e duas datas e retorna a 
diferença de tempo em segundos entre eles.*/

#include <iostream>
#include <string>
#include <ctime>
#include <chrono>

using namespace std;

// Função que converte uma string no formato hh:mm para segundos
int horaParaSegundos(string hora) {
    int horas, minutos;
    sscanf(hora.c_str(), "%d:%d", &horas, &minutos);
    return horas * 3600 + minutos * 60;
}

// Função que converte uma string no formato dd/mm/aaaa para o tipo time_t
time_t dataParaTime(string data) {
    struct tm tm = {0};
    sscanf(data.c_str(), "%d/%d/%d", &tm.tm_mday, &tm.tm_mon, &tm.tm_year);
    tm.tm_mon -= 1; // Ajusta o mês para começar em 0
    tm.tm_year -= 1900; // Ajusta o ano para começar em 1900
    return mktime(&tm);
}

int main() {
    string hora1, hora2, data1, data2;
    cout << "Digite a primeira hora (hh:mm): ";
    cin >> hora1;
    cout << "Digite a primeira data (dd/mm/aaaa): ";
    cin >> data1;
    cout << "Digite a segunda hora (hh:mm): ";
    cin >> hora2;
    cout << "Digite a segunda data (dd/mm/aaaa): ";
    cin >> data2;

    // Converte as horas e datas para o tipo time_t
    time_t t1 = dataParaTime(data1) + horaParaSegundos(hora1);
    time_t t2 = dataParaTime(data2) + horaParaSegundos(hora2);

    // Calcula a diferença em segundos entre as duas datas
    int diferenca = difftime(t2, t1);

    cout << "A diferença de tempo entre " << hora1 << " " << data1 << " e " << hora2 << " " << data2 << " é de " << diferenca << " segundos." << endl;

    return 0;
}