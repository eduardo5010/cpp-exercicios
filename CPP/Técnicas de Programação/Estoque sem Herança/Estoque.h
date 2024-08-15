#ifndef ESTOQUE_H
#define ESTOQUE_H

class Estoque{
	vector<Notebook> notebooks;
  public:
	Estoque();
	void imprimeLista() const;
	void leDadosLista();	 
	~Estoque(); 
};

#endif