// Aluno: Eduardo Santos Ferreira

// Este arquivo utiliza a seguinte codificação: UTF-8

// Arquivo de implementação da classe Aluguel_Veiculo

// Declarando bibliotecas
#include "LVP05.h"
#include <iostream>
#include <chrono> // Biblioteca para realizar operações envolvendo tempo
#include <string>

using namespace std;
using namespace chrono;

// Implementando métodos do objeto do tipo Aluguel_Veiculo

Aluguel_Veiculo::Aluguel_Veiculo()
{
    this->marca = ' ';
    this->modelo = ' ';
    this->ano = 0;
    this->taxa_diaria = 0.0;
    this->data_retirada = ' ';
    this->hora_retirada = ' ';
    this->data_devolucao = ' ';
    this->hora_devolucao = ' ';
    this->tempo_utilizado = 0;
    this->total_aluguel = 0.0;
};

void Aluguel_Veiculo::set_marca(string marca)
{
    this->marca = marca;
};

void Aluguel_Veiculo::set_modelo(string modelo)
{
    this->modelo = modelo;
};

void Aluguel_Veiculo::set_ano(int ano)
{
    this->ano = ano;
};

void Aluguel_Veiculo::set_taxa_diaria(float taxa_diaria)
{
    this->taxa_diaria = taxa_diaria;
};

void Aluguel_Veiculo::set_data_retirada(string data_retirada)
{
    this->data_retirada = data_retirada;
};

void Aluguel_Veiculo::set_hora_retirada(string hora_retirada)
{
    this->hora_retirada = hora_retirada;
};

void Aluguel_Veiculo::set_data_devolucao(string data_devolucao)
{
    this->data_devolucao = data_devolucao;
};

void Aluguel_Veiculo::set_hora_devolucao(string hora_devolucao)
{
    this->hora_devolucao = hora_devolucao;
};

string Aluguel_Veiculo::get_marca()
{
    return this->marca;
};

string Aluguel_Veiculo::get_modelo()
{
    return this->modelo;
};

int Aluguel_Veiculo::get_ano()
{
    return this->ano;
};

float Aluguel_Veiculo::get_total_aluguel()
{
    return this->total_aluguel;
};~

string Aluguel_Veiculo::get_data_retirada()
{
    return this->data_retirada;
};

string Aluguel_Veiculo::get_hora_retirada()
{
    return this->hora_retirada;
};

string Aluguel_Veiculo::get_data_devolucao()
{
    return this->data_devolucao;
};

string Aluguel_Veiculo::get_hora_devolucao()
{
    return this->hora_devolucao;
};

// Função que converte uma string no formato hh:mm para segundos
int Aluguel_Veiculo::horaParaSegundos(string hora) 
{
    int horas, minutos;
    sscanf(hora.c_str(), "%d:%d", &horas, &minutos);
    return horas * 3600 + minutos * 60;
}

// Função que converte uma string no formato dd/mm/aaaa para o tipo time_t
time_t Aluguel_Veiculo::dataParaTime(string data) 
{
    struct tm tm = {0};
    sscanf(data.c_str(), "%d/%d/%d", &tm.tm_mday, &tm.tm_mon, &tm.tm_year);
    tm.tm_mon -= 1; // Ajusta o mês para começar em 0
    tm.tm_year -= 1900; // Ajusta o ano para começar em 1900
    return mktime(&tm);
}

void Aluguel_Veiculo::calcular_tempo_utilizado(time_t t1, time_t t2)
{
    // Calcula a diferença em segundos entre as duas datas
    int diferenca = difftime(t2, t1);
    this->tempo_utilizado = diferenca / 3600;
};

void Aluguel_Veiculo::calcular_valor_aluguel()
{
    this->total_aluguel = ((this->taxa_diaria / 24) * this->tempo_utilizado);
};

Aluguel_Veiculo::~Aluguel_Veiculo()
{
    cout << "Programa finalizado." << endl;
};