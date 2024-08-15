// Aluno: Eduardo Santos Ferreira

/*Crie uma classe Empresa_Solar para calcular a quantidade de painéis solares necessários para uma residência em função do consumo mensal em kWh do imóvel. Além do número de painéis deverá ser determinado também a área mínima que esses painéis ocupam e a economia anual gerada pela adoção do sistema com base no valor mensal gasto pelo imóvel, fornecido pelo usuário em reais.


Alguns pontos importantes sobre o programa.

. Os atributos a serem utilizados na classe são:  potência do imóvel,  valor_mensal, potência do painel solar, quantidade de painéis, área da placa solar; 

· O cálculo de painéis é resultado da divisão da potência do imóvel em kWh pela potência do painel solar que é 32,00 kWh para a região Nordeste do país.

· Placa solar adotada pela empresa tem área de 2,5 m².

· A área mínima para instalação dos módulos solares é dada pelo produto entre o número de painéis necessários e a área do módulo solar.

· O cálculo da economia anual com a implementação do Sistema Fotovoltaico é dado por 90% do valor mensal em R$ de energia, multiplicado pela quantidade de meses em um ano.

· Todos os dados das potencias são em kWh.

Não será necessário neste momento utilizarmos o construtor (assunto da próxima semana).  Na main, crie uma aplicação para executar esse programa e que exiba todos os valores calculados.

Obs.: Os resultados devem ser mostrados com duas casas decimais*/

// Importando bibliotecas
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Criando um objeto da classe Empresa_Solar
class Empresa_Solar {
private:
    float potencia_imovel;
    float valor_mensal;
    float potencia_painel;
    int quantidade_paineis;
    float area_paineis;
public:
    // Definindo os protótipos dos métodos
    void calcular_paineis();
    float calcular_economia_anual();
    int get_quantidade_paineis();
    float get_area_paineis();
    void set_potencia_imovel(float);
    void set_valor_mensal(float);
    void set_potencia_painel(float);
};

// Implementando métodos da classe Empresa_Solar

void Empresa_Solar::set_potencia_painel(float potencia_painel) {
    this->potencia_painel = potencia_painel;
};

void Empresa_Solar::calcular_paineis() {
    this->quantidade_paineis = ceil(this->potencia_imovel / this->potencia_painel);
    this->area_paineis = this->quantidade_paineis * 2.5; // área da placa solar
};

float Empresa_Solar::calcular_economia_anual() {
    float economia_mensal = 0.9 * this->valor_mensal;
    float economia_anual = economia_mensal * 12;
    return economia_anual;
};

int Empresa_Solar::get_quantidade_paineis() {
    return this->quantidade_paineis;
};

float Empresa_Solar::get_area_paineis() {
    return this->area_paineis;
};

void Empresa_Solar::set_potencia_imovel(float potencia_imovel) {
    this->potencia_imovel = potencia_imovel;
};

void Empresa_Solar::set_valor_mensal(float valor_mensal) {
    this->valor_mensal = valor_mensal;
};

// Função principal
int main() {

    setlocale(LC_ALL,"portuguese");

    // Declarando variáveis
    float potencia_imovel, valor_mensal;
    float potencia_painel = 32.00; // Valor fixo para a região Nordeste

    // Instanciando objeto do tipo Empresa_Solar
    Empresa_Solar empresa;
    empresa.set_potencia_painel(potencia_painel);

    // Solicitando informações do usuário
    cout << "Potencia mensal kwh: " << endl;
    cin >> potencia_imovel;
    cout << "Gasto mensal em R$: " << endl;
    cin >> valor_mensal;

    // Chamando métodos do objeto Empresa_Solar
    empresa.set_potencia_imovel(potencia_imovel);
    empresa.set_valor_mensal(valor_mensal);

    // Calculando e retornando a quantidade de painéis e a área mínima, e a economia realizada
    empresa.calcular_paineis();
    cout << "Quantidade de paineis necessarios: " << empresa.get_quantidade_paineis() << endl;
    cout << "Area minima para instalacao: " << empresa.get_area_paineis() << " m²" << endl;
    float economia_anual = empresa.calcular_economia_anual();
    cout << "Economia anual: R$ " << setiosflags (ios::fixed) << setprecision (2) << economia_anual << endl;
    
    return 0;
}