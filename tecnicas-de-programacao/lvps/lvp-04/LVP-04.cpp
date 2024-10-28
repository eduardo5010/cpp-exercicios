// Aluno: Eduardo Santos Ferreira

// Este arquivo utiliza a seguinte codificação: UTF-8

/*Crie um programa que realize um teste nutricional, calculando o Índice de Massa Corporal (ICM) e a Taxa Metabólica Basal (TMB).  O ICM é muito utilizado,
pois fornece uma visão bem clara e simples de como está o nível de gordura de cada pessoa, e pode ser calculado dividindo o peso (em kg)
pela altura ao quadrado (em metros). Já a TMB é o número de calorias que um corpo humano precisa durante um dia pra realizar funções básicas.

Para calcular a TMB vamos usar a Equação de Harris-Benedict:

Para homens: TMB = (13,75 x Peso[Kg]) + (5.0 x Altura[Cm]) – (6,76 x idade[Anos]) + 66,47

Para mulheres: TMB = (9,56 x Peso[Kg]) + (1,85 x Altura[Cm]) – (4,68 x idade[Anos]) + 665,1

O Usuário deve fornecer: peso em kg, altura em cm, idade em anos, o sexo da pessoa.

Deverá ter também:

●     Uma classe para armazenar os valores e funções para realizar os cálculos, A classe deverá ter métodos para armazenar os valores dos atributos (set) e para retornar esses valores (get).

●     Um construtor que inicializa os valores de todos os atributos;

●     Um destrutor para informar que todos os testes foram realizados.

Além disso, a classe deverá conter 1 método de impressão de classificação usando os valores encontrados no ICM

O programa deverá imprimir os valores fornecidos pelos usuário e os respectivos IMC e TMB, contidos nos métodos de impressão. Não esquecer de imprimir também
a classificação do IMC fornecido na tabela acima.

Obs.: Os resultados devem ser mostrados com duas casas decimais.*/

// Importando bibliotecas
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Criando objeto do tipo/classe TesteNutricional
class TesteNutricional
{
private:
    // Declarando atributos do objeto TesteNutricional
    float peso;
    float altura;
    int idade;
    char sexo;

public:
    // Definindo protótipos do objeto TesteNutricional
    TesteNutricional();
    void set_peso(float);
    void set_altura(float);
    void set_idade(int);
    void set_sexo(char);
    float get_peso();
    float get_altura();
    int get_idade();
    char get_sexo();
    float calcular_icm();
    float calcular_tmb();
    void imprimir_classificacao_icm_tmb();
    ~TesteNutricional();
};

// Implementando construtor para instanciar variáveis
TesteNutricional::TesteNutricional()
{
    this->peso = 0.0;
    this->altura = 0.0;
    this->idade = 0;
    this->sexo = ' ';
};

// Implementando métodos do objeto TesteNutricional
void TesteNutricional::set_peso(float peso)
{
    this->peso = peso;
};

void TesteNutricional::set_altura(float altura)
{
    this->altura = altura;
};

void TesteNutricional::set_idade(int idade)
{
    this->idade = idade;
};

void TesteNutricional::set_sexo(char sexo)
{
    this->sexo = sexo;
};

float TesteNutricional::get_peso()
{
    return peso;
};

float TesteNutricional::get_altura()
{
    return altura;
};

int TesteNutricional::get_idade()
{
    return idade;
};

char TesteNutricional::get_sexo()
{
    return sexo;
};

// Método para calcular ICM
float TesteNutricional::calcular_icm()
{
    float altura_metros = altura / 100;
    float icm = peso / pow(altura_metros, 2);
    return icm;
};

// Método para calcular TMB
float TesteNutricional::calcular_tmb()
{
    float tmb;

    if (sexo == 'M')
    {
        tmb = (13.75 * peso) + (5.0 * altura) - (6.76 * idade) + 66.47;
    }
    else
    {
        tmb = (9.56 * peso) + (1.85 * altura) - (4.68 * idade) + 665.1;
    };

    return tmb;
};

// Método para imprimir resultados
void TesteNutricional::imprimir_classificacao_icm_tmb()
{
    float icm = calcular_icm();
    cout << "O Índice de Massa Corporal (ICM): " << setiosflags(ios::fixed) << setprecision(1) << icm << endl;
    if (icm < 18.5)
    {
        cout << "Classificação do IMC: Abaixo do peso normal." << endl;
    }
    else if (icm >= 18.5 && icm < 24.9)
    {
        cout << "Classificação do IMC: Peso Normal." << endl;
    }
    else if (icm >= 25.0 && icm < 29.9)
    {
        cout << "Classificação do IMC: Excesso de Peso." << endl;
    }
    else
    {
        cout << "Classificação do IMC: Obesidade." << endl;
    };
    float tmb = calcular_tmb();
    cout << "Taxa Metabólica Basal (TMB): " << setiosflags(ios::fixed) << setprecision(2) << tmb << endl;
};

// Criando destrutor
TesteNutricional::~TesteNutricional()
{
    cout << "Teste nutricional realizado." << endl;
};

// Função principal
int main()
{

    setlocale(LC_ALL, "portuguese");

    // Declarando variáveis
    float peso, altura;
    int idade;
    char sexo;
    TesteNutricional n1;

    // Solicitando informações ao usuário
    cout << "Informe o peso do(a) paciente (em Kg): " << endl;
    cin >> peso;
    cout << "Informe a altura do(a) paciente (em cm): " << endl;
    cin >> altura;
    cout << "Informe a idade do(a) paciente: " << endl;
    cin >> idade;
    cout << "Informe o sexo do(a) paciente (M ou F): " << endl;
    cin >> sexo;

    // Chamando métodos do objeto TesteNutricional
    n1.set_peso(peso);
    n1.set_altura(altura);
    n1.set_idade(idade);
    n1.set_sexo(sexo);
    n1.imprimir_classificacao_icm_tmb();

    // Parando o código
    return 0;
}