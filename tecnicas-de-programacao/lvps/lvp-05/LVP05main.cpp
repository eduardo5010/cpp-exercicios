// Aluno: Eduardo Santos Ferreira

// Este arquivo utiliza a seguinte codificação: UTF-8

/*Escreva o programa abaixo em três arquivos separados. Um com o protótipo da classe (.h), outro com a
especificação das classes (.cpp) e o terceiro com a execução do programa (main()).

A classe Aluguel_Veiculo é responsável por gerenciar o aluguel de veículos e também atributos informados na main.

A classe possui diversos métodos, incluindo um construtor que inicializa todos os atributos com valores 0 ou vazio,
métodos set para receber as informações do carro e um método para calcular o valor total do aluguel, além de métodos para 
imprimir informações do veículo e do valor do aluguel.

- Valor do aluguel = ((taxa diária/24) x tempo utilizado)

O programa principal (main.cpp) vai instanciar um objeto da classe Aluguel_Veiculo. O programa solicita ao usuário
informações sobre o veículo, como marca, modelo e ano, o valor da diária e data/hora de retirada e de devolução.

Com base nas informações fornecidas pelo usuário, o programa utiliza os métodos da classe Aluguel_Veiculo para
registrar o aluguel e calcular o valor total do aluguel. Em seguida, o programa exibe as informações do veículo e
o valor total do aluguel ao usuário.

Obs:

Armazene data e horário em variáveis separadas.

Período máximo 5(cinco) dias de aluguel.

Caso necessário crie outros métodos.

Os valores devem ser mostrados com duas casas decimais.

O intervalo tem que ser dentro do mesmo mês.*/

#include "LVP05.cpp"
#include <iostream>
#include <iomanip>
#include <chrono>

using namespace std;
using namespace chrono;

// Função principal
int main()
{

    setlocale(LC_ALL, "portuguese");

    // Declarando variáveis
    string marca, modelo;
    float taxa_diaria;
    string data_retirada, hora_retirada, data_devolucao, hora_devolucao;

    // Instanciando objeto do tipo Aluguel_Veiculo
    Aluguel_Veiculo a1;

    // Solicitando informações ao usuário
    cout << "Marca: " << endl;
    getline(cin, marca);
    cout << "Modelo: " << endl;
    cin.ignore();
    getline(cin, modelo);
    cout << "Valor da diária: " << endl;
    cin.ignore();
    cin >> taxa_diaria;
    cout << "Por favor informe os dados do aluguel: " << endl;
    cout << "Data da retirada (dd/mm/aaaa): " << endl;
    cin.ignore();
    getline(cin, data_retirada);
    cout << "Hora da retirada(hh:mm): " << endl;
    cin.ignore();
    getline(cin, hora_retirada);
    cout << "Data de devolução (dd/mm/aaaa): " << endl;
    cin.ignore();
    getline(cin, data_devolucao);
    cout << "Hora de devolução(hh:mm): " << endl;
    cin.ignore();
    getline(cin, hora_devolucao);

    // Chamando métodos do objeto Aluguel_Veiculo
    a1.set_marca(marca);
    a1.set_modelo(modelo);
    a1.set_taxa_diaria(taxa_diaria);
    a1.set_data_retirada(data_retirada);
    a1.set_hora_retirada(hora_retirada);
    a1.set_data_devolucao(data_devolucao);
    a1.set_hora_devolucao(hora_devolucao);
    
    time_t t1 = a1.dataParaTime(a1.get_data_retirada) + a1.horaParaSegundos(a1.get_hora_retirada);
    time_t t2 = a1.dataParaTime(a1.get_data_devolucao) + a1.horaParaSegundos(a1.get_hora_devolucao);

    a1.calcular_tempo_utilizado(t1, t2);
    a1.calcular_valor_aluguel();

    // Retornando resultados
    cout << "Marca do veículo: " << a1.get_marca() << endl;
    cout << "Modelo: " << a1.get_modelo() << endl;
    cout << "Ano: " << a1.get_ano() << endl;
    cout << "Valor total do aluguel: R$ " << setiosflags(ios::fixed) << setprecision(2) << a1.get_total_aluguel() << endl;

    return 0;
}