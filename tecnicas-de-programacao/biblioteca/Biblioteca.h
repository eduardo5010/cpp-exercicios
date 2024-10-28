#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

class Biblioteca{
	vector<Livro> li; // li = lista de livros
  public:
	Biblioteca();
	void imprimeLista() const;
	void leDadosLista();	 
	~Biblioteca(); 
};

#endif