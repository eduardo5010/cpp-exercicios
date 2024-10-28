#include "Notebook.h"

Notebook::Notebook(int codigo, string nome, string modelo, string marca, double preco, int quantidade, float comprimento, float largura, string processador, string memoria){
	setCodigo(codigo);
	setNome(nome);
	setModelo(modelo);
	setMarca(marca);
	setPreco(preco);
	setQuantidade(quantidade);
	setComprimento(comprimento);
	setLargura(largura);
	setProcessador(processador);
	setMemoria(memoria);
}

void Notebook::setCodigo(int codigo)
{
	this->codigo = codigo;
}
void Notebook::setNome(string nome)
{
	this->nome = nome;
}
void Notebook::setModelo(string modelo)
{
	this->modelo = modelo;
}
void Notebook::setMarca(string marca)
{
	this->marca = marca;
}
void Notebook::setPreco(double preco)
{
	this->preco = preco;
}
void Notebook::setQuantidade(int quantidade)
{
	this->quantidade = quantidade;
}
void Notebook::setComprimento(float comprimento)
{
	this->comprimento = comprimento;
}
void Notebook::setLargura(float largura)
{
	this->largura = largura;
}
void Notebook::setProcessador(string processador)
{
	this->processador = processador;
}
void Notebook::setMemoria(string memoria)
{
	this->memoria = memoria;
}

int Notebook::getCodigo()
{
	return codigo;
}
string Notebook::getNome()
{
	return nome;
}
string Notebook::getModelo()
{
	return modelo;
}
string Notebook::getMarca()
{
	return marca;
}
double Notebook::getPreco()
{
	return preco;
}
int Notebook::getQuantidade()
{
	return quantidade;
}
float Notebook::getComprimento()
{
	return comprimento;
}
float Notebook::getLargura()
{
	return largura;
}
string Notebook::getProcessador()
{
	return processador;
}
string Notebook::getMemoria()
{
	return memoria;
}


void Notebook::novonome(){
	cout << "\nDigite o codigo do notebook : "; 
	cin >> codigo;
	cout << "\nDigite o nome do notebook : "; 
	fflush(stdin); // limpa o buffer de entrada
	getline(cin,nome);
	cout << "\nDigite o modelo do notebook : ";  
	fflush(stdin); // limpa o buffer de entrada
	getline(cin,modelo);
	cout << "\nDigite a marca do notebook : "; 
	fflush(stdin); // limpa o buffer de entrada
	getline(cin,marca);
	cout << "\nDigite o preco do notebook : "; 
	cin >> preco;
	cout << "\nDigite a quantidade do notebook : "; 
	cin >> quantidade;
	cout << "\nDigite o comprimento do notebook : "; 
	cin >> comprimento;
	cout << "\nDigite a largura do notebook : "; 
	cin >> largura;
	cout << "\nDigite o processador do notebook : "; 
	fflush(stdin); // limpa o buffer de entrada
	getline(cin,processador);
	cout << "\nDigite a memoria do notebook : "; 
	fflush(stdin); // limpa o buffer de entrada
	getline(cin,memoria);
}

void Notebook::imprime()const{
	cout<<endl;
	cout << "Codigo : " << codigo <<endl;
	cout << "Nome : " << nome <<endl;
	cout << "Modelo : " << modelo <<endl;
	cout << "Marca : " << marca <<endl;
	cout << "Preco : " <<fixed<<setprecision(2)<< preco <<endl;
	cout << "Quantidade : " << quantidade <<endl;
	cout << "Comprimento : " <<fixed<<setprecision(1)<< comprimento <<endl;
	cout << "Largura : " <<fixed<<setprecision(1)<< largura <<endl;
	cout << "Processador : " << processador <<endl;
	cout << "Memoria : " << memoria <<endl;
}


