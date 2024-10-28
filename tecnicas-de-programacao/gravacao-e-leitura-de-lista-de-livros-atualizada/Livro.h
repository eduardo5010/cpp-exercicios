#ifndef LIVRO_H
#define LIVRO_H

class Livro{
private :
	char titulo[30];
	char autor[30];
	int numreg;
	double preco;
public :
    string getTitulo();
    string getAutor();
    int getNumReg();
    float getPreco();
    void setTitulo(string);
    void setAutor(string);
	void setNumReg(int);
	void setPreco(float);
	void novonome();
	void imprime();
};

#endif