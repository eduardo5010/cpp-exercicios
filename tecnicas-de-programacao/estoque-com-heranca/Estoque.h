#ifndef ESTOQUE_H
#define ESTOQUE_H

#include "Notebook.h"
#include "Produto.h"

class Estoque{
	vector<Notebook> notebooks; // li = lista de notebooks
  public:
	Estoque();
	void imprimeLista() const;
	void leDadosLista();	 
	~Estoque(); 
};

#endif