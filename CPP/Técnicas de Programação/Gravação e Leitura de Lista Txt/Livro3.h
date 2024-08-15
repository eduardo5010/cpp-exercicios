#ifndef LIVRO3_H
#define LIVRO3_H

class Livro{
private :
	string titulo;
	string autor;
	int numreg;
	double preco;
public :
	Livro(string="", string="",int=0,double=0.0);
	void setTitulo(string);
	void setAutor(string);
	void setNumReg(int);
	void setPreco(float);
	string getTitulo();
	string getAutor();
	int getNumReg();
	double getPreco();
	void novonome();
	void imprime();
};

#endif