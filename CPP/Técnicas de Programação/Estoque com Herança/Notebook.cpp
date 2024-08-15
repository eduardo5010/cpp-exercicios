#include "Notebook.h"
#include "Produto.h"

Notebook::Notebook(int codigo, string nome, string modelo, string marca, double preco, int quantidade, float comprimento, float largura, string processador, string memoria) : Produto(codigo, nome, modelo, marca, preco, quantidade), comprimento(comprimento), largura(largura), processador(processador), memoria(memoria) 
{
}

void Notebook::setComprimento(float comprimento)
{
	this->comprimento = comprimento;
}

void Notebook::setLargura(float largura)
{
	this->largura = largura;
}

void Notebook::setMemoria(string memoria)
{
	this->memoria = memoria;
}

void Notebook::setProcessador(string processador)
{
	this->processador = processador;
}

float Notebook::getComprimento()
{
	return this->comprimento;
}

float Notebook::getLargura()
{
	return this->largura;
}

string Notebook::getProcessador()
{
	return this->processador;
}

string Notebook::getMemoria()
{
	return this->memoria;
}

void Notebook::novonome()
{
	
}

void Notebook::imprime() const
{
	cout << endl;
	cout << "Codigo : " << codigo << endl;
	cout << "Nome : " << nome << endl;
	cout << "Modelo : " << modelo << endl;
	cout << "Marca : " << marca << endl;
	cout << "Preco : " << fixed << setprecision(2) << preco << endl;
	cout << "Quantidade : " << quantidade << endl;
	cout << "Comprimento : " << comprimento << endl;
	cout << "Largura : " << largura << endl;
	cout << "Processador : " << processador << endl;
	cout << "Memoria : " << memoria << endl;
}