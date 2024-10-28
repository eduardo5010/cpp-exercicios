#include "Livro2.h"

Livro::Livro(string tituloLivro, string nomeAutor, int valorNumreg, double valorPreco){
	setTitulo(tituloLivro);
	setAutor(nomeAutor);
	setNumReg(valorNumreg);
	setPreco(valorPreco);
}

void Livro::setTitulo(string tituloLivro){
	this->titulo = tituloLivro;
}
void Livro::setAutor(string nomeAutor){
	this->autor = nomeAutor;
}
void Livro::setNumReg(int valorNumreg){
	this->numreg=valorNumreg;
}
void Livro::setPreco(float valorPreco){
	this->preco=valorPreco;
}

string Livro::getTitulo(){
	return titulo;
}
string Livro::getAutor(){
	return autor;
}
int Livro::getNumReg(){
	return numreg;
}
double Livro::getPreco(){
	return preco;
}


void Livro::novonome(){
	cout << "\nDigite Titulo : "; 
	fflush(stdin); // limpa o buffer de entrada
	getline(cin,titulo);
	cout << "\nDigite Autor : ";  
	fflush(stdin); // limpa o buffer de entrada
	getline(cin, autor);
	cout << "\nDigite o Numero do Registro : "; 
	cin >> numreg;
	cout << "\nDigite o Preco : "; 
	cin >> preco;
}

void Livro::imprime(){
	cout<<endl;
	cout << "Titulo : " << titulo <<endl;
	cout << "Autor : " << autor <<endl;
	cout << "Numero do Registro : " << numreg <<endl;
	cout << "Preco : " <<fixed<<setprecision(2)<< preco <<endl;
}


