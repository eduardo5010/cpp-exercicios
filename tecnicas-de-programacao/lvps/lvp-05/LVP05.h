// Aluno: Eduardo Santos Ferreira

// Este arquivo utiliza a seguinte codificação: UTF-8

// Arquivo cabeçalho da classe Aluguel_Veiculo

// Declarando bibliotecas
#ifndef LVP05_H
#define LVP05_H
#include <string>

using namespace std;

// Definindo protótipos do objeto do tipo Aluguel_Veiculo

class Aluguel_Veiculo
{
private:
    string marca;
    string modelo;
    int ano;
    float taxa_diaria;
    string data_retirada;
    string hora_retirada;
    string data_devolucao;
    string hora_devolucao;
    int tempo_utilizado;
    float total_aluguel;

public:
    Aluguel_Veiculo();
    void set_marca(string);
    void set_modelo(string);
    void set_ano(int);
    void set_taxa_diaria(float);
    void set_data_retirada(string);
    void set_hora_retirada(string);
    void set_data_devolucao(string);
    void set_hora_devolucao(string);
    string get_marca();
    string get_modelo();
    int get_ano();
    float get_total_aluguel();
    string get_data_retirada();
    string get_hora_retirada();
    string get_data_devolucao();
    string get_hora_devolucao();
    int horaParaSegundos(string);
    time_t dataParaTime(string);
    void calcular_tempo_utilizado(time_t, time_t);
    void calcular_valor_aluguel();
    ~Aluguel_Veiculo();
};

#endif