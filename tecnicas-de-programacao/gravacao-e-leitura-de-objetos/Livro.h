#ifndef LIVRO_H
#define LIVRO_H

class Livro{
private :
	char titulo[30];
	char autor[30];
	int numreg;
	double preco;
public :
	Livro(string="", string="",int=0,double=0.0);
	void setTitulo(string);
	void setAutor(string);
	void setNumReg(int);
	void setPreco(float);
	void novonome();
	void imprime();
};

#endif