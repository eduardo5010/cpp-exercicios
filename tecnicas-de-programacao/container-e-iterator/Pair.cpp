#include <iostream>
#include <utility>
#include <locale.h>

using namespace std;

struct comprador{
    string nome;
    int idade;
};

int main()
{
    setlocale(LC_ALL,"");

    pair<string,pair<string, int> > carro1;
    carro1 = make_pair("Fusca",make_pair("José", 48));
    cout << "Carro: " << carro1.first << endl;
    cout << "Nome comprador(a): " << carro1.second.first << ". Idade: " << carro1.second.second << endl;

    pair<string,comprador>carro2;
    carro2.first = "Hilux";
    carro2.second.nome = "Maria";
    carro2.second.idade = 25;
    cout << "Carro: " << carro2.first << endl;
    cout << "Nome comprador(a): " << carro2.second.nome << ". Idade: " << carro2.second.idade << endl<<endl;

    return 0;
}

