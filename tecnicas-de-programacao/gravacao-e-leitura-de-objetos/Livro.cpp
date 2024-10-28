#include "Livro.h"

Livro::Livro(string tituloLivro, string nomeAutor, int valorNumreg, double valorPreco){
	setTitulo(tituloLivro);
	setAutor(nomeAutor);
	setNumReg(valorNumreg);
	setPreco(valorPreco);
}

void Livro::setTitulo(string tituloLivro){
   // copia no máximo 30 caracteres da string para titulo 
   const char *valorTitulo = tituloLivro.data();
   int length = tituloLivro.size();               
   length = ( length < 30 ? length : 29 );
   strncpy(titulo, valorTitulo, length );
   titulo[length] = '\0'; // acrescenta caractere nulo ao titulo
	
}
void Livro::setAutor(string nomeAutor){
   // copia no máximo 30 caracteres da string para autor 
   const char *valorAutor = nomeAutor.data();
   int length = nomeAutor.size();               
   length = ( length < 30 ? length : 29 );
   strncpy( autor, valorAutor, length );
   autor[length] = '\0'; // acrescenta caractere nulo a autor
	
}
void Livro::setNumReg(int valorNumreg){
	this->numreg=valorNumreg;
}
void Livro::setPreco(float valorPreco){
	this->preco=valorPreco;
}


void Livro::novonome(){
	cout << "\nDigite Titulo : "; 
	fflush(stdin); // limpa o buffer de entrada
	cin.getline(titulo,30);
	cout << "\nDigite Autor : ";  
	fflush(stdin); // limpa o buffer de entrada
	cin.getline(autor,30);
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


